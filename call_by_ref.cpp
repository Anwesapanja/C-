#include<iostream>
using namespace std;
class Ref
{
    //private:int x=10;
            //int y=20;
    public://void input();
            void swap(int x ,int y);
            void swap(int *x,int *y);

};
//void Ref::input()
void Ref::swap(int a,int b)
{
    a=a*b;
    b=a/b;
    a=a/b;
}
void Ref::swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main()
{
   Ref a;
   int x=10;
   int y=20;
   a.swap(x,y);
   cout<<"after swap"<<x<<y;
   a.swap(&x,&y);
   cout<<endl<<"after swap"<<x<<y;
}