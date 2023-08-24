The Dependency Inversion Principle (DIP) 
It states that high-level modules should not depend on low-level modules. Both should depend on abstractions. Abstractions shouldnot depend on details. Details should depend on abstractions.

Source code explanation:
we have the INotificationSender interface, and two concrete classes EmailSender and SMSSender implementing this interface. The NotificationService class depends on the abstraction provided by INotificationSender to send messages using different methods.

By programming against the abstraction (INotificationSender), we can easily switch between different notification sending methods (email, SMS) without changing the NotificationService code. This demonstrates the Dependency Inversion Principle, as high-level modules depend on abstractions rather than concrete implementations.
