#include<iostream>
using namespace std;
class Stack
{
    private:int *arr,top,size,val;
    public:Stack(int a)
            {
                size=a;
                arr=new int[size];
                top=-1;
                val=0;
            }
            void push(int val);
            void pop();
            void display();
};
void Stack::push(int val)
{
    if(top>=size-1)
    {
        cout<<"stack is overflow";
    }
    else
    {
        arr[++top]=val;
    }
} 
void Stack::pop()
{
    if(top==-1)
    {
        cout<<"stack is underflow";
    }
    else
    {
       val= arr[top--];
        cout<<"the popped value will be: "<<val;
    }
} 
void Stack::display()
{
    if(top==-1)
    {
        cout<<"sorry no values"<<endl;
    }
    else
    {
        cout<<"the stack will be ";
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<" "<<endl;
        }
    }
} 
  int main()
{
    int a,element;
    cout<<"the size will be: ";
    cin>>a;
    Stack s(a);
    int choice=0;
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
                case 1:cout<<"the value will be: ";
                        cin>>element;
                        s.push(element);
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

    return 0;
}        
    
       