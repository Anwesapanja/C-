#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    // Virtual destructor
    virtual ~Shape() {
        cout << "Destroying Shape" << endl;
    }

    // Pure virtual functions
    virtual void display() const = 0;
    virtual double area() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    virtual ~Circle() {
        cout << "Destroying Circle" << endl;
    }

    void display() const override {
        cout << "Shape: Circle" << endl;
        cout << "Radius: " << radius << endl;
    }

    double area() const override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    virtual ~Rectangle() {
        cout << "Destroying Rectangle" << endl;
    }

    void display() const override {
        cout << "Shape: Rectangle" << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }

    double area() const override {
        return length * width;
    }
};

class Trapezoid : public Shape {
private:
    double base1;
    double base2;
    double height;

public:
    Trapezoid(double b1, double b2, double h) : base1(b1), base2(b2), height(h) {}

    virtual ~Trapezoid() {
        cout << "Destroying Trapezoid" << endl;
    }

    void display() const override {
        cout << "Shape: Trapezoid" << endl;
        cout << "Base 1: " << base1 << endl;
        cout << "Base 2: " << base2 << endl;
        cout << "Height: " << height << endl;
    }

    double area() const override {
        return 0.5 * (base1 + base2) * height;
    }
};

int main() {
    Shape *shapes[3];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Trapezoid(3.0, 4.0, 5.0);

    for (int i = 0; i < 3; ++i) {
        shapes[i]->display();
        cout << "Area: " << shapes[i]->area() << endl;
        cout << endl;
    }

    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }

    return 0;
}