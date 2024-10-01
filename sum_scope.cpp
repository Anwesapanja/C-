#include<iostream>
using namespace std;

class SUM
{
    private: int x,y,sum;
    public: void s();
};

 void SUM ::s()
 {
    cout<<"enter the value of x: "<<endl;
    cin>>x;
    cout<<"enter the value of y: "<<endl;
    cin>>y;
    sum=x+y;
    cout<<"the sum will be: "<<sum;
 }
 int main()
 {
    SUM a;
    a.s();
 }