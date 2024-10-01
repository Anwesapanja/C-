#include<iostream>

using namespace std;
float ar;

class Rectangle
{
    public:
        float l;
        float b;
};
class Cylinder
{
    public:
         float r;
        float h;
};
class Square
{
    public: int s;
};
class Cone
{
    public: 
        float r;
        float h;
};
class Circle 
{
    public: int r;
};

float area(Rectangle r)
{
   ar=(r.l*r.b);
   return ar; 
}
float area(Cylinder c)
{
    ar=(3.14*c.r*c.r*c.h);
    return ar;
}
float area(Square a)
{
    ar=(a.s*a.s);
    return ar;
}
float area(Cone c1)
{
    ar=(1.33)*(c1.r*c1.r)*c1.h;
    return ar;
}
float area (Circle f)
{
    ar=(3.14)*(f.r)*(f.r);
    return ar;
}

int main()
{
    Rectangle y{.l=5,.b=6};
    Cylinder t{.r=5.6,.h=8.6};
    Circle o{.r=6};
    cout<<"the circle area will be: "<< area(o);
    cout<<"the rectangle will be: "<<area(y);
    cout<<endl <<"the cylinder will be: "<<area(t);
    return 0;


    
    
}

