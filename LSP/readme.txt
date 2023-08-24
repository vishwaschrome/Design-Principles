Liskov Substitution Principle (LSP) 
It states that objects of a derived class must be able to replace objects of the base class without affecting the correctness of the program.In other words, derived classes should be substitutable for their base classes without introducing unexpected behavior.

Source code explanation:
We have a Shape base class with a pure virtual function calculateArea(), and two derived classes Rectangle and Square that inherit from Shape. Both Rectangle and Square override the calculateArea() function.

The printArea() function accepts a Shape reference as a parameter and calls its calculateArea() method to print the area. This demonstrates the Liskov Substitution Principle because the Rectangle and Square classes can be substituted for the Shape base classwithout affecting the behavior of the program. Despite being different shapes, they adhere to the same contract defined by the Shape class.

This example highlights how adhering to Liskov Substitution Principle helps ensure that derived classes are true substitutes for their base classes and can be used interchangeably in the codebase.
