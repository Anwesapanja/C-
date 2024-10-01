#include<iostream>
using namespace std;

class sum
{
    int a,b,sum;
    public:
    void s()
    {
        cout<<"enter the value of a";
        cin>>a;
        cout<<"enter the value of b";
        cin>>b;
        sum=a+b;
        cout<<"the sum will be: "<<sum;
    }
};    
 int main()
{
    sum u;
    u.s(); 
    return 0;
}
