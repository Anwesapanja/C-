#include<iostream>
using namespace std;
#define max 100;
class stack
{
    private:
     int a[max];
     int top;
    public:
     stack()
    {
        top=-1;
    }
    void push(int arr)
    {
        if(top>=100-1)
        {
            cout<<"stack is overflow";
        }
        else
        {
            a[++top]==arr;
        }
    }
    void pop(void)
    {
        if(top==-1)
        {
            cout<<"stack is empty";
        }
        else
        {
            cout<<a[top--];
        }
    }
};
int main()
{
    stack s;
    int num;
    cout<<"enter a number: "<<endl;
    cin>>num;
    int q=num;
    while(num>0)
    {
        int rem=num%2;
        num=num/2;
        s.push(rem);
    }
    while(q>0)
    {
      s.pop();
      q=q/2;  
    }
    return 0;
}