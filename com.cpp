#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
   
    Complex(double realPart = 0.0, double imaginaryPart = 0.0) : real(realPart), imaginary(imaginaryPart) {}

    
    Complex(const Complex& other) : real(other.real), imaginary(other.imaginary) {}

   
    Complex subtract(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

  
    Complex multiply(const Complex& other) const {
        double resultReal = (real * other.real) - (imaginary * other.imaginary);
        double resultImaginary = (real * other.imaginary) + (imaginary * other.real);
        return Complex(resultReal, resultImaginary);
    }

 
    void display() const {
        if (imaginary < 0)
            std::cout << real << " - " << -imaginary << "i" << std::endl;
        else
            std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
  
    Complex num1(3.0, 2.0);
    Complex num2(1.0, 4.0);

    cout << "First complex number: ";
    num1.display();
    cout << "Second complex number: ";
    num2.display();

  
    Complex subtractionResult = num1.subtract(num2);
    Complex multiplicationResult = num1.multiply(num2);


    cout << "Subtraction result: ";
    subtractionResult.display();
    cout << "Multiplication result: ";
    multiplicationResult.display();

    return 0;
}