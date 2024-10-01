#include<iostream>
using namespace std;

template<typename T>

class Stack
{
    private:T *arr;int top;int size;
    public:Stack(int s)
           {
            size=s;
            arr=new T[size];
            top=-1;
           } 
             

           void push(T val)
           {
            if(top>=(size-1))
            {
              cout<<" stack is overflow. so cannot perform push";
                
                 return;
            }
          
             arr[++top]=val;
           }
           void pop()
           {
             
            if(top==-1)
            {
            cout<<"stack is underflow condition pop cannot perform";
            }
            else
           {
             T val=arr[top--];
            cout<< "popped value: "<<val;
            }
           }
           void display()
           {
             if(top==-1)
             {
                cout<<"no values";
             }
             else
             {
                cout<<endl;
                cout<<"the stack will be: ";
                for(int i=0;i<=top;i++)
                {
                    cout<<arr[i];
                }
             }
           }
};

int main()
{
    int a;
    cout<<"enter the size";
    cin>>a;
    Stack<int>intr(a);
    intr.push(10);
    intr.push(20);
    intr.push(30);
    intr.pop();
    intr.display();
    cout<<endl;
    Stack<string>stringr(a);
    stringr.push("Hello");
    stringr.push("world");
    stringr.push("ranu");
    stringr.push("panja");
    stringr.push("Anwesa");
    stringr.pop();
    stringr.display();
    return 0;
}
