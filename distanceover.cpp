#include<iostream>
using namespace std;

class Dist
{
    private:int feet;
            int inch;
    public: Dist()
            {
                feet=0;
                inch=0;
            }   
            Dist(int p,int q)
            {
                feet=p;
                inch=q;
            }
            Dist operator +(const Dist& obj)
            {
                Dist d3; int ft;
                d3.feet=this->feet+ obj.feet;
                d3.inch=this->inch+obj.inch;
                if(d3.inch>=12)
                {
                    ft=d3.inch/12;
                    d3.feet=d3.feet+ft;
                    ft=d3.inch%12;
                    d3.inch=ft;
                }

            }
            int get_feet_inch()
            {
                
                return (feet,inch);
                
            }     
};

int main()
{
    int f,in;
    cout<<"enter the feet and inch";
    cin>>f>>in;
    Dist d1(f,in);
    cout<<endl<<"enter the another feet and inch";
    cin>>f>>in;
    Dist d2(f,in);
    Dist d4;
    d4=d1+d2;
    cout<<"the added distance will be: "<<d4.get_feet_inch()<<endl;
    return 0;
}    




