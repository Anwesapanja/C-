#include<iostream>
using namespace std;

class SWAP
{
    private:int a,b;
    public:void s();
};
void SWAP::s()
{
    cout<<"enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"the value of a and b will be: "<<a<<endl<<b;
}
int main()
{
SWAP u;
u.s(); 
return 0;
}   
