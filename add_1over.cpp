#include <iostream>
#include <string>  // Include this to use std::string and std::to_string

using namespace std;
float sum;  // This is still a global variable but should ideally be avoided

class Intadd {
public:
    int a;
    int b;
};

class Floatadd {
public:
    float a;
    float b;
    int c;
};

class Complexadd {
public:
    double real;
    double imag;
};

float ADD(Intadd x) {
    sum = x.a + x.b;
    return sum;
}

float ADD(Floatadd f) {
    sum = f.a + f.b + f.c;
    return sum;
}

string ADD(Complexadd c1, Complexadd c2) {
    double sum_real = c1.real + c2.real;
    double sum_imag = c1.imag + c2.imag;
    return to_string(sum_real) + " + i" + to_string(sum_imag);
}

int main() {
    Intadd d{5, 6};
    Floatadd u{8.6f, 7.0f, 9};
    Complexadd t{5.0, 8.0};
    Complexadd t1{9.0, 10.0};

    cout << "The sum of integers is: " << ADD(d) << endl;
    cout << "The sum of floating numbers is: " << ADD(u) << endl;
    cout << "The sum of two complex numbers is: " << ADD(t, t1) << endl;

    return 0;
}