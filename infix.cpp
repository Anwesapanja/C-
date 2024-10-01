#include<iostream>
#define MAX 5
using namespace std;
class stack
{
    private:
    char a[MAX];
    int top;
    public:
    stack()
    {
        top==-1;
    }
    void push(char c)
    {
        if(top==MAX-1)
        {
            cout<<"Overflow";
        }
        else
        {
            a[++top]=c;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"underflow";
        }
        else
        {
            cout<<"Element popped="<<a[top--];
        }
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"underflow";
        }
        else
        {
            cout<<"\n";
            for(int i=0;i<=top;i++)
            {
                cout<<a[i];
                cout<<"\n";
            }
        }
    }
};
int main()
{
    stack t;
    cout<<"Enter the expession";
    string s;
    cin>>s;
    int f=0;
    for(int i=0;i<s.length();i++)
    {
        char c=s[i];
        if(c=='+'||c=='-'||c=='*'||c=='/')
        {
            if(f==0)
            {
                t.push(s[i-1]);
                t.push(s[i+1]);
                t.push(c);
                f=1;
            }
            else
            {
                t.push(s[i+1]);
                t.push(c);
            }
        }
    }
    t.display();

}