#include<iostream>
using namespace std;

class A
{
    private:int x;
    public: A()
            {
                x=0;
            }
            void set_data(int p)
            {
                x=p;
            }
            void get_data()
            {
                cout<<" within class A : "<<x;
            }
};

class B:public A
        {
            private:int y;
            public: B()
            {
                y=0;
            }
            void set_data(int p,int q=2)
            {
                A::set_data( p);
                y=q;
            }
            void get_data()
            {
                A::get_data();
                cout<<"within class B "<<y;
            }
        };

int main()
{
    B B1;
    B1.set_data(5,3);
    B1.get_data();
    return 0;
}       