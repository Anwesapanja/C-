#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data=data;
        this -> next=NULL;
    }
};
void insert(Node* &head, int d)
{
     Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void print(Node* &head)
{
    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main()
{
    int n;
    cout<<"Enter number to be inserted"<<endl;
    cin>>n;
    Node* node1 = new Node(n);
    int choice;
    Node* head=node1;
    do
    {
        cout<<endl<<"Enter your choice: "<<endl<<"1.insert 2.display 4.exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter number to be inserted"<<endl;
            cin>>n;
            insert(head,n);
            break;
            /*case 2:
            a.delete1();
            break;*/
            case 2:
            print(head);
            break;
            case 3:
            cout<<"-----Exit------";
            exit(0);
            break;
            default:
            cout<<"Invalid output ";
        }
    }while(1);
    return 0;
}