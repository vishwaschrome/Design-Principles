#include <iostream>
#include <vector>

class Employee {
public:
    virtual double calculateSalary() const = 0; // Virtual function to calculate salary
};

class HourlyEmployee : public Employee {
private:
    double hourlyRate;
    double hoursWorked;

public:
    HourlyEmployee(double rate, double hours) : hourlyRate(rate), hoursWorked(hours) {}

    double calculateSalary() const override {
        return hourlyRate * hoursWorked;
    }
};

class SalariedEmployee : public Employee {
private:
    double annualSalary;

public:
    SalariedEmployee(double salary) : annualSalary(salary) {}

    double calculateSalary() const override {
        return annualSalary / 12.0;
    }
};

// Function to calculate total salary of a collection of employees
double totalSalary(const std::vector<Employee*>& employees) {
    double total = 0.0;
    for (const Employee* emp : employees) {
        total += emp->calculateSalary();
    }
    return total;
}

int main() {
    HourlyEmployee hourlyEmp(20.0, 160.0);
    SalariedEmployee salariedEmp(60000.0);

    std::vector<Employee*> employees = {&hourlyEmp, &salariedEmp};

    double total = totalSalary(employees);
    std::cout << "Total Salary: " << total << std::endl;

    return 0;
}

