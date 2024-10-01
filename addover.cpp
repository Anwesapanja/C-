#include<iostream>
#include<string>

using namespace std;
float sum;

class Intadd
{
    public: int a;
            int b;
};
class Floatadd
{
    public:float a;
            float b;
            int c;
};
class Complexadd
{
    public: double real;
            double imag;
};

float ADD(Intadd x)
{
    sum=x.a+x.b;
    return sum;
}

float ADD(Floatadd f)
{
    sum=f.a+f.b+f.c;
    return sum;
}
string ADD(Complexadd c1,Complexadd c2)
{

   double sum1=c1.real+c2.real;
   double  sum2=c1.imag+c2.imag;
    return to_string(sum1)+ "+ i" + to_string(sum2);
}

int main()
{
    Intadd d{.a=5,.b=6};
    Floatadd u{.a=8.6,.b=7.0,.c=9};
    Complexadd t{.real=5.0,.imag=8.0};
    Complexadd t1{.real=9,.imag=10};
    cout<<"the sum of integer will be: "<<ADD(d);
    cout<<endl<<"the sum of floating number: "<<ADD(u);
    cout<<endl<<"the sum of two complex number will be: "<<ADD(t,t1)<<endl;
    return 0;
}