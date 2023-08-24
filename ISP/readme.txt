The Interface Segregation Principle (ISP)
It states that clients should not be forced to depend on interfaces they do not use. In other words, it's better to have smaller,more specific interfaces rather than a single large interface.

Source code Explanation:
we have defined interfaces IInternetConnectable and IMusicPlayable, representing devices that can connect to the internet and play music, respectively.

The Smartphone class implements both interfaces since smartphones can connect to the internet and play music. The Speaker class, on the other hand, only implements the IMusicPlayable interface since it can only play music but doesn't need internet connectivity.

By adhering to the Interface Segregation Principle, we've divided the interfaces into smaller, more focused pieces. This allows classes to implement only the interfaces that are relevant to their capabilities, avoiding unnecessary methods and promoting a more modular and flexible design.
