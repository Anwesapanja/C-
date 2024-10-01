#include<iostream>
using namespace std;
class Comp
{
    private: double real;
              double imag;
    public: Comp()
            {
                real=0.0;
                imag=0.0;
            }
            Comp(double real,double imag)
            {
                real=real;
                imag=imag;
            }
            Comp(Comp& C)
            {
                real=C.real;
                imag=C.imag;
            }
            Comp Sub(Comp& C);
            Comp Mul(Comp& C);
            void display();
};            

 Comp Comp:: Sub( Comp& C)
{
    return Comp(real-C.real , imag-C.imag);
}
 Comp Comp::Mul(Comp& C)
{
    return Comp((real*C.imag)+(imag*C.real));
} 
void Comp::display()
{
if (imag < 0)
        cout << real << " - " << -imag << "i" << endl;
else
        cout << real << " + " << imag << "i" << endl;
}            
int main()
{
 int a,b;
 cout<<"the first complex number: "<<endl;
 cin>>a>>b;
 Comp C1(a,b);
 C1.display();
 cout<<endl<<"the 2nd complex class: "<<endl;
 cin>>a>>b;
 Comp C2(a,b);
C2.display();

Comp Subresult=C1.Sub(C2);
Comp Mulresult=C1.Mul(C2);

cout<<"subtraction result will be: ";
Subresult.display();
cout<<"Multiplication result will be: ";
Mulresult.display();
return 0;
}


