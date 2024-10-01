#include<iostream>
#include<stdlib.h>
using namespace std;

class queue
{
    private:
      int Q[5],front,rear;
    public:
    queue()
    {
        front=-1;
        rear=-1;
    }  
    void insert(int val)
    {
        if(rear==5-1)
        {
            cout<<"queue is full";
        }
        else if(front==-1)
        {
            rear++;
            Q[rear]=val;
        }
    }
    void del ()
    {
        if((front==-1)&&(front>rear))
        {
            cout<<"Empty";
        }
        else
        {
           front++;
           cout<<Q[front];
            //front++;
        }
    }
    void display()
    {
        cout<<"the queue will be: ";
        for(int i=front;i<=rear;i++)
        {
            cout<<Q[i]<<endl;
        }
    }
};
int main()
{
    queue a;
    int val;
    int choice;
    do
    {
     cout<<"1.... insert\n";
     cout<<"2....del\n\n";
     cout<<"3....display\n\n";
     cout<<"4....exit\n";
     cout<<"\n\n\nEnter your choice"<<endl;
     cin>>choice;
     switch(choice)
     {
        case 1: cout<<"Enter a value"<<endl;
        cin>>val;
        a.insert(val);
        break;
        case 2:a.del();
        break;
        case 3:a.display();
        break;
        case 4:exit(0);
        default: cout<<"Wrong choice";
        break;
     }   /* code */
    } while ((choice>=1)&&(choice<=4));
    return 0;
    
}