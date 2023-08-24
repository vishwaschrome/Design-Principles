Open-Closed Principle(OCP)
A software artifact should be open for extension but closed for modification. This means, every time you add a new feature, you do so by adding new code, not by changing old code.

The OCP is one of the driving forces behind the architecture of systems. The goal is to make the sytem easy to extend without incurring a high impact of change. This goal is accomplished by partitioning the system into components, and arranging those components into a dependancy hirearchy that protects higher-level componenets from changes in lower-level components.

Source code explanation:

Employee class is an abstract base class with a pure virtual function calculateSalary(). The HourlyEmployee and SalariedEmployee classes are concrete implementations of Employee, each providing their own way to calculate salary.

The totalSalary() function accepts a collection of Employee pointers and calculates the total salary without needing to change the function when new employee types are added. This adheres to the Open-Closed Principle, allowing you to extend the functionalityby adding new employee types without modifying the existing code.
