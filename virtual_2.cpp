#include<iostream>
using namespace std;

class Person
{
    public:virtual void print()
            {
                cout<<"person...";
            }
};
class Employee:public Person
{
    private: int id;
    public:Employee()
            {
                id=0;
            }
            Employee(int d)
            {
                id=d;
            }
            virtual void print()override
            {
               Person:: print();
               cout<<endl;
                cout<<"the id will be: "<<id;
            }
};
class Student:public Person
{
    private:int roll_number;
    public:Student()
            {
                roll_number=0;
            }
            Student(int r)
            {
                roll_number=r;
            }
             virtual void print()override
            {
                cout<<endl;
                Person::print();
                cout<<"the roll number will be: "<<roll_number;
            }
};
class Manager:public Employee,public Student
{
    private:int officeid;
    public:Manager()
           {
                officeid=0;
           } 
           Manager(int f,int id,int roll):Employee(id),Student(roll)
           {
                officeid=f;
           }
            void print()override
           {
            cout<<endl;

            Employee::print();
            Student::print();
            cout<<"the office id will be: "<<officeid;           }
};

int main()
{
    
    Person *p;

    p = new Employee(5);
    p->print();
    delete p;

    p = new Student(50);
    p->print();
    delete p;

    
    Student *s;
    s=new Manager(5,5,50);
    p=s;
    p->print();
     return 0;
}
