#include <iostream>

class Complex_A {
public:
    Complex_A(float real = 0, float img = 0) {
        this->real = real;
        this->img = img;
    }

    void input() {
        std::cout << "Enter Complex Number(real, img): ";
        std::cin >> real >> img;
    }

    float getReal() const {
        return real;
    }

    float getImg() const {
        return img;
    }

    void display() const {
        if (img < 0)
            std::cout << real << " - " << -img << "i" << std::endl;
        else
            std::cout << real << " + " << img << "i" << std::endl;
    }

protected:
    float real;
    float img;
};

class Complex_B : public Complex_A {
public:
    Complex_B(float real = 0, float img = 0) : Complex_A(real, img) {}

    Complex_A operator+ (Complex_A &c) {
        return {real + c.getReal(), img + c.getImg()};
    }
};

class Complex_C : public Complex_B {
public:
    Complex_C(float real = 0, float img = 0) : Complex_B(real, img) {}

    Complex_A operator- (Complex_A &c) {
        return {real - c.getReal(), img - c.getImg()};
    }
};

int main() {
    Complex_C c1(2, 4), c2(3, 4);
    Complex_A c3 = c1 + c2;
    c3.display();

    return 0;
}