#include<iostream>
using namespace std;

class Employee
{
    private:string name;
            int age;
            string Dep;
            int salary;
    public: Employee()
            {
                name="";
                age=0;
                Dep="";
                salary=0;
            } 
            Employee(string name_1,int age_1,string dep_1,int salary_1)
            {
                name=name_1;
                age=age_1;
                Dep=dep_1;
                salary=salary_1;
            } 
            ~Employee()
            {

            }
            void setdata(string name_1,int age_1,string dep_1,int salary_1) 
            {
                 name=name_1;
                age=age_1;
                Dep=dep_1;
                salary=salary_1;
            }  
            void display()
            {
                cout<<"the name will be: "<<name;
                cout<<"the age will be: "<<age;
                cout<<"the dep will be: "<<Dep;
                cout<<"the salary will be: "<<salary;
            }    
};

int main()
{
    int n;
    cout<<"enter the number of the employee:";
    cin>>n;
    Employee a("Anwesa",22,"CSBS",55000);
    a.display();
    Employee* emp= new Employee[n];

    for(int i=0;i<n;i++)
    {
        string name;
        int age;
        string dep;
        int salary;
        cout<<"the no of employee will be: "<<i+1;
        cout<<endl<<"the name of the employee";
        cin>>name;
        cout<<endl<<"the age will be: ";
        cin>>age;
        cout<<endl<<"the dep will be: ";
        cin>>dep;
        cout<<endl<<"the salary will be: ";
        cin>>salary;
        emp[i].setdata(name,age,dep,salary);

    }
    cout<<"the employee display will be: ";
    for(int i=0;i<n;i++)
    {
        emp[i].display();
    }




}