#include<iostream>
using namespace std;

class Employee
{
    public:void print()
           {     
             cout<<"educated: "<<endl<<"Communicative skill: "<<"salary: ";
           }
};
class skilled:protected Employee
{
    public:void print_1()
           {
                cout<<"Mtech,Btech,MBA";
                cout<<endl<<"Hindi,English,Bengali ";
                cout<<endl<<"course certificate ";
               
           } 
};
class unskilled:protected Employee
{
    public:void print_2()
           {
            cout<<"10th pass ";
            cout<<endl<<"mother lang";
            
           }     
};
class Manager_1:protected skilled
{
    public:void print_3()
    {
        cout<<"silled Manager: ";
        cout<<endl;
        print();
        print_1();
        cout<<endl<<"50,000/-";
    }
};
class Labour_1:protected skilled
{
    public:void print_4()
    {
        cout<<"skilled Labour: ";
        cout<<endl;
        print();
        print_1();
        cout<<endl<<"25,000/-";
    }
};
class Manager_2:protected unskilled
{
    public:void print_5()
    {
        cout<<"unskilled Manager: ";
        cout<<endl;
        print();
        print_2();
        cout<<endl<<"10,000/-";
    }        
};
class Labour_2:protected unskilled
{
    public:void print_6()
    {
        cout<<"unskilled labour : ";
        cout<<endl;
        print();
        print_2();
        cout<<endl<<"2,000/-";
    }
};
int main()
{
    Manager_1 m_1;
    Labour_1 l_1;
    Manager_2 m_2;
    Labour_2 l_2;
    m_1.print_3();
    cout<<endl;
    l_1.print_4();
    cout<<endl;
    m_2.print_5();
    cout<<endl;
    l_2.print_6();
    return 0;
}


