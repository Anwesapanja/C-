#include<iostream>
#include<string>
using namespace std;
class ADD
{
    private: double real1,real2,imag1,imag2;
             int sum,real3,imag3; 
    public:void get_data();
            void add_data();
            void print_data();
};

void ADD::get_data()
{
    cout<<"the 1st complex number will be: ";
    cin>>real1>>imag1;
    cout<<"the 2nd complex number will be: ";
    cin>>real2>>imag2;
    add_data();
}
void ADD::add_data()
{
    real3=real1+real2;
    imag3=imag1+imag2;
    print_data();
}
void ADD::print_data()
{
    if (imag3< 0)
            cout << real3 << " - " << -imag3 << "i" << endl;
        else
            cout << real3 << " + " << imag3 << "i" << endl;
}

int main()
{
    ADD a;
    a.get_data();
    return 0;
}


