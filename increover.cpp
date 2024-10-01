#include<iostream>
using namespace std;

class In
{
    private:int x, y;
    public: In()
            {
                x=0;
            }
            In(int p)
            {
                x=p;
            }
            In operator ++(int)
            {
                
              y=++x;
           
            }    
            int gety()
            {
                return y;
            }
};

int main()
{
    int a;
    cout<<"enter the value";
    cin>>a;
    In S(a);
     S++;
    cout<<"the x will be: "<<S.gety();
    return 0;
}