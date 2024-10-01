#include<iostream>
#include<stdlib.h>
#define MAX 5

using namespace std;

class queue
{
private:
    int Q[MAX], front, rear;

public:
    queue(){
        front=-1;
        rear=-1;
    }  

    void insert(int val){
        if(rear == MAX - 1){
            cout<<"Queue is full\n";
        }else if(rear == -1 && front == -1){
            front++;
            Q[++rear] = val;
        }else{
            Q[++rear] = val;
        }
    }

    void del(){
        if(front == -1){
            cout<<"Empty";
        }else if(front <= rear){
            cout<<Q[front++]<<'\n';

            if(front > rear && front != -1 && rear != -1){
                front = -1;
                rear = -1;
            }
        }
    }

    void display(){
        cout<<"The queue will be: \n";
        for(int i = front; i <= rear; i++)
            cout<<Q[i]<<endl;
    }
};

int main()
{
    queue a;
    int val;
    int choice;

    do{
        cout<<"\n1. Insert\n";
        cout<<"2. Delete\n";
        cout<<"3. Display\n";
        cout<<"4. Exit\n";
        cout<<"\nEnter your choice:- ";
        cin>>choice;

        switch(choice){
            case 1: 
                cout<<"Enter a value: ";
                cin>>val;
                a.insert(val);
                break;

            case 2:
                a.del();
                break;

            case 3:
                a.display();
                break;

            case 4:
                exit(0);

            default: 
                cout<<"Wrong choice!";
                break;
        }
    }while((choice >= 1) && (choice <= 4));

    return 0;
}