#include<iostream>
using namespace std;

class Area
{
    private:int h,b,l,b1,s;
            float a1,a2,a3;
    public:void triangle();
            void rectangle();  
            void squ();                  
};
void Area::triangle()
{
    cout<<"the height and base will be: "<<endl;
    cin>>h>>b;
    a1=(0.5)*h*b;
    cout<<"the area of the traingle will be: "<<a1;
}
void Area::rectangle()
{
    cout<<"the length and breadth: "<<endl;
    cin>>l>>b1;
    a2=(l*b1);
    cout<<"the area of the rectangle will be: "<<a2;
}
void Area::squ()
{
    cout<<"the side of the square will be: "<<endl;
    cin>>s;
    a3=(s*s);
    cout<<"the area of the square will be: "<<a3;
}

int main()
{
    Area x;
    Area  y;
    Area z;
    x.triangle();
    y.rectangle();
    z.squ();
    return 0;
}