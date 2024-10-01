#include <cstdlib>
#include<iostream>
using namespace std;
class Comp
{
    private: 
       double real;
       double imag;
    
    public: 
        Comp()
        {
            real=0.0;
            imag=0.0;
        }
        
        Comp(Comp& C)
        {
            real=C.real;
            imag=C.imag;
        }

        Comp(const Comp& C) //low scope constructor
        {
            real=C.real;
            imag=C.imag;
        }

        Comp(double real, double imag)
        {
            this->real=real; //real = real
            this->imag=imag; //imag = imag
        }
        Comp operator+ (const Comp &C)
        {
            int realsum;
            int imagsum;
            realsum=(this->real+C.real);
            imagsum=(this->imag+C.imag);
            return Comp(realsum,imagsum);
        }
        Comp operator- (const Comp &C)
        {
            int realsum;
            int imagsum;
            realsum=(this->real-C.real);
            imagsum=(this->imag-C.imag);
            return Comp(realsum,imagsum);
        }
        Comp operator* (const Comp &C)
        {
            int realsum;
            int imagsum;
            realsum=((this->real*C.real)-(this->imag*C.imag));
            imagsum=((this->real*C.imag)+(this->imag*C.real));
            return Comp(realsum,imagsum);
        }
        Comp operator/(const Comp &C)
        {
            int realsum;
            int imagsum;
            realsum=((this->real*C.real)-(this->imag*C.imag))/(this->real+C.real)*(this->real-C.imag);
            imagsum=((this->real*C.imag)+(this->imag*C.real));
            return Comp(realsum,imagsum);
        }
        void display()
        {
            if (imag< 0)
            cout << real << " - " << -imag << "i" << endl;
        else
            cout << real << " + " << imag << "i" <<endl;
        }

};
 

int main()
{
    Comp C1(2,5);
    C1.display();
    Comp C2(5,5);
    C2.display();
    cout<<"sum will be: ";
    Comp C3=C1+C2;
    C3.display();
    cout<<endl<<"diff will be:";
    Comp C4=C1-C2;
    C4.display();
    cout<<endl<<"multipication will be: ";
    Comp C5=C1*C2;
    C5.display();
    cout<<endl<<"the division will be: ";
    Comp C6=C1/C2;
    C6.display();
    Comp a(2,5),b(5,5),c(1,1),d(5,6);
    cout<<endl<<"the expression :";
    Comp f=(a-b*c+d);
    f.display();

    return 0;
}
