#include<iostream>
using namespace std;

class Area
{
    private: float ar;
    public: Area()
            {
                ar=0;
            }
            void area(int s)
            {
                cout<<"the area of square will be: ";
                ar=(s*s);
                cout<<ar;
            }
            void area(int l,int b)
            {
                cout<<"the area of rectangle will be: ";
                ar=(l*b);
                cout<<ar;
            }
            void area(float r)
            {
                cout<<"the area of circle: ";
                ar=(3.14*r*r);
                cout<<ar;
            }
            void area (const float x,float r,float h)
            {
                cout<<"the area of cylinder : ";
                ar=(3.14*r*h);
                cout<<ar;
            }
            void 
}