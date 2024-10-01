#include<iostream>
using namespace std;

class A
{
    private:int roll;
    public: A()
            {
                roll=0;
            }
            A(int p)
            {
                roll=p;
            }
            void get_roll()
            {
                cout<<"the roll is: ";
                cin>>roll;
                cout<<endl <<"roll number will be: "<<roll;
            }
};
class B:public A
{
    protected:int sub_marks1;
              int sub_marks2;
            B()
            {
                sub_marks1=0;
                sub_marks2=0;
            } 
            B(int x,int y)
            {
                sub_marks1=x;
                sub_marks2=y;
            }  
            void get_marks()
            {
                cout<<"The marks will be: ";
                cin>>sub_marks1;
                cout<<endl<<"the 2nd marks will be: ";
                cin>>sub_marks2;
            }
};
class C:public B
{
    private:int total;
    public:void add()
            {
                get_roll();
                get_marks();
                total=sub_marks1+sub_marks2;
                cout<<"total: "<<total;
            }
};
int main()
{
    C a1;
    a1.add();
    return 0;
}        
   
    


    