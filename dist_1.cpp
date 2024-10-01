#include <iostream>

class Complex {
public:
  Complex(double real = 0.0, double imag = 0.0) : real(real), imag(imag) {}

  // Declare friend functions for overloaded operators
  friend Complex operator+(const Complex& a, const Complex& b);
  friend Complex operator-(const Complex& a, const Complex& b);
  friend Complex operator*(const Complex& a, const Complex& b);

  // Function to display complex number
  void print() const {
    std::cout << real << " + " << imag << "j" << std::endl;
  }

private:
  double real;
  double imag;
};

// Friend function to add complex numbers
Complex operator+(const Complex& a, const Complex& b) {
  return Complex(a.real + b.real, a.imag + b.imag);
}

// Friend function to subtract complex numbers
Complex operator-(const Complex& a, const Complex& b) {
  return Complex(a.real - b.real, a.imag - b.imag);
}

// Friend function to multiply complex numbers
Complex operator*(const Complex& a, const Complex& b) {
  return Complex(a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real);
}

int main() {
  Complex a(1, 2);
  Complex b(3, 4);
  Complex c(5, 6);
  Complex d(7, 8);

  // Evaluate the expression a - b * c + d
  Complex result = a - (b * c) + d;

  std::cout << "Result: ";
  result.print();

  return 0;
}