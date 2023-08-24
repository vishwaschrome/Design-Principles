#include <iostream>

class Shape {
public:
    virtual double calculateArea() const = 0; // Virtual function to calculate area
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double calculateArea() const override {
        return width * height;
    }
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double calculateArea() const override {
        return side * side;
    }
};

void printArea(const Shape& shape) {
    std::cout << "Area: " << shape.calculateArea() << std::endl;
}

int main() {
    Rectangle rectangle(4.0, 6.0);
    Square square(5.0);

    printArea(rectangle); // Prints the area of the rectangle
    printArea(square);    // Prints the area of the square

    return 0;
}

