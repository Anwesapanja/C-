#include<iostream>
using namespace std;
//#define max_size 6;
class stack
{
    private:
       int a[100];
       int n;
       int top;
    public:
        stack()
        {
            cout<<"Enter the size of the array"<<endl;
            cin>>n;
            top=-1;
        }
    void push()
    {
        if(top>=n-1)
        {
            cout<<"stack is overflow";
        }
        else
        {
            ++top;
            cout<<"Enter a value";
            cin>>a[top];
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack is empty";
        }
        else
        {
            cout<<a[top--]<<"removed\n";
        }
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"sorry no values"<<endl;
        }
        else
        {
            cout<<"the stack will be";
            for(int i=top;i>=0;i--)
            {
                cout<<a[i]<<" "<<endl;
            }
        }
    }
};
int main()
{
    stack s;
    int choice=0;
    {
        do
        {
            cout<<"1....push\n";
            cout<<"2.....pop\n";
            cout<<"3.....display\n";
            cout<<"4....exit\n";
            cout<<"\n\n\nenter your choice"<<endl;
            cin>>choice;
            switch(choice)
            {
                case 1:s.push();
                    break;  
                case 2:s.pop();
                    break; 
                case 3:s.display();
                    break;
                case 4:cout<<"exit....."<<endl;
                    break;
                default:cout<<"wrong choice"<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
            }
            /* code */
        } while ((choice>=1)&&(choice<=4));
    }
    return 0;
}        
    
