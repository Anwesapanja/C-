#include<iostream>
#include<math.h>
using namespace std;

class Shape
{   
    public:virtual ~Shape()
           {
            
           } 
           virtual int show()
           {
                cout<<"person....";
           }
           virtual void display()=0;
           virtual double area()=0;
};
class Circle:public Shape
{
    private:int radius;
    public:Circle()
            {
                radius=0;
            }
            Circle(int r)
            {
                radius=r;
            }
            virtual ~Circle()
            {
                
            }
            void display()override
            {
                cout<<endl;
                cout<<"shape: Circle"<<radius;
                cout<<endl;
            }
            double area()override
            {
                cout<<"the area will be: "<<(M_PI*radius*radius);
                return(M_PI*radius*radius);
            }    
};
class Rectangle:public Shape
{
    private:int length;
            int width;
    public:Rectangle()
           {
            length =0;
            width=0;
           } 
           Rectangle(int l, int w)
           {
            length=l;
            width=w;
           } 
           virtual ~Rectangle()
           {
            
           } 
           void display()override
           {
            cout<<"shape: Rectangle"<<length<<width;
            cout<<endl;
           }  
           double area()override 
           {
            cout<<"the area will be: "<<(length*width);
            return  (length*width);
           }    
};
class Trapezoid: public Shape
{
    private:double base1;
            double base2,height;
    public:Trapezoid()
            {
                base1=base2=height=0;
            }  
            Trapezoid(int b_1,int b_2,int h)
            {
                base1=b_1;
                base2=b_2;
                height=h;
            }
            virtual ~Trapezoid()
            {
            }
            void display()override
            {
                cout<<endl;
                cout<<"shape: Trapezoid"<<base1<<base2<<height;
            }
            double area()override
            {
                cout<<"the area will be: "<<((0.5)*(base1+base2)*height);
                return ((0.5)*(base1+base2)*height);
            }
};

int main()
{
    Shape *s[3];
    s[0]=new Circle(5);
    s[1]=new Rectangle(4,5);
    s[2]=new Trapezoid(5,1,1);

    for(int i=0;i<3;i++)
    {
        s[i]->display();
        cout<<endl;
        s[i]->area();
        
    }
   return 0;
}    
    