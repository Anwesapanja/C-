#include<iostream>
using namespace std;

class sum
{
    int sum;
    public:
    void s(int x,int y)
    {
        sum=x+y;
        cout<<"the sum will be: "<<sum;
    }
};
int main()
{
    int a,b;
    cout<<"enter the value of a and b";
    cin>>a>>b;
    sum y;
    y.s(a,b);
    return 0;
}
