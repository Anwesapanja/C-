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

protected:
    float real;
    float img;
};

class Complex_B : public Complex_A  {
public:
    Complex_B(float real = 0, float img = 0) {
        this->real = real;
        this->img = img;
    }

    Complex_A operator+ (Complex_A &c) {
        return {real + c.getReal(), img + c.getImg()};
    }
    void display()
    {
        if ( img < 0)
        {   
        cout<<real << " - " << -img << "i" << endl;
        }
        else
        cout << real << " + " << img<< "i" << endl;
    }   
    
};

class Complex_C : public Complex_B  {
public:
    Complex_C(float real = 0, float img = 0) {
        this->real = real;
        this->img = img;
    }

    Complex_A operator- (Complex_A &c) {
        return {real - c.getReal(), img - c.getImg()};
    }
};