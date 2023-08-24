#include <iostream>

// Interface for devices that can connect to the internet
class IInternetConnectable {
public:
    virtual void connectToInternet() = 0;
    virtual void disconnectFromInternet() = 0;
};

// Interface for devices that can play music
class IMusicPlayable {
public:
    virtual void playMusic() = 0;
    virtual void stopMusic() = 0;
};

// Concrete class for a smartphone
class Smartphone : public IInternetConnectable, public IMusicPlayable {
public:
    void connectToInternet() override {
        std::cout << "Smartphone is connected to the internet." << std::endl;
    }

    void disconnectFromInternet() override {
        std::cout << "Smartphone is disconnected from the internet." << std::endl;
    }

    void playMusic() override {
        std::cout << "Smartphone is playing music." << std::endl;
    }

    void stopMusic() override {
        std::cout << "Smartphone stopped playing music." << std::endl;
    }
};

// Concrete class for a speaker
class Speaker : public IMusicPlayable {
public:
    void playMusic() override {
        std::cout << "Speaker is playing music." << std::endl;
    }

    void stopMusic() override {
        std::cout << "Speaker stopped playing music." << std::endl;
    }
};

int main() {
    Smartphone smartphone;
    smartphone.connectToInternet();
    smartphone.playMusic();
    smartphone.disconnectFromInternet();
    smartphone.stopMusic();

    Speaker speaker;
    speaker.playMusic();
    speaker.stopMusic();

    return 0;
}

