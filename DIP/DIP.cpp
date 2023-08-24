#include <iostream>
#include <string>

// Abstract interface for sending notifications
class INotificationSender {
public:
    virtual void sendNotification(const std::string& message) = 0;
};

// Concrete implementation for sending email notifications
class EmailSender : public INotificationSender {
public:
    void sendNotification(const std::string& message) override {
        std::cout << "Sending email: " << message << std::endl;
        // Code to send email
    }
};

// Concrete implementation for sending SMS notifications
class SMSSender : public INotificationSender {
public:
    void sendNotification(const std::string& message) override {
        std::cout << "Sending SMS: " << message << std::endl;
        // Code to send SMS
    }
};

// High-level class that sends notifications using INotificationSender
class NotificationService {
private:
    INotificationSender* sender;

public:
    NotificationService(INotificationSender* s) : sender(s) {}

    void send(const std::string& message) {
        if (sender) {
            sender->sendNotification(message);
        }
    }
};

int main() {
    EmailSender emailSender;
    SMSSender smsSender;

    NotificationService emailNotification(&emailSender);
    NotificationService smsNotification(&smsSender);

    emailNotification.send("Hello via email!");
    smsNotification.send("Hello via SMS!");

    return 0;
}

