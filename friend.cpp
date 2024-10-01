#include<iostream>
using namespace std;

class Complex{
    private :
        float real;
        float imag;
    public :
        void setcomplex(){
            cout<<"Enter the real part of the complex number : "<< endl;
            cin >>real;
            cout<<"Enter the imaginary part of the complex number :"<< endl;
            cin >>imag;
        }
        void getcomplex(){
            cout<<"The Complex number is "<< real <<"+"<< imag <<"i"<<endl;
        }
        friend Complex friendfunc(Complex& obj1,Complex& obj2);
        friend Complex operator-(Complex& obj1,Complex& obj2);
};
Complex friendfunc(Complex& obj1,Complex& obj2){
    Complex temp;
    temp.real = obj1.real + obj2.real;
    temp.imag = obj1.imag + obj2.imag;
    return temp;
}
Complex operator-(Complex& obj1,Complex& obj2){
    Complex temp;
    temp.real = obj1.real - obj2.real;
    temp.imag = obj1.imag - obj2.imag;
    return temp;
}
int main(){
    Complex c1;
    c1.setcomplex();
    c1.getcomplex();
    Complex c2;
    c2.setcomplex();
    Complex c3 = friendfunc(c1,c2);
    c3.getcomplex();
    Complex c4;
    c4 = c1 - c2;
    c4.getcomplex();

    return 0;   
}