#include<iostream>
using namespace std;

class An
{
    private:int x;
    public:An()
           {
            x=0;
        
           } 
           An(int p)
           {
            x=p;
           }
           An(An& p)
           {
            x=p.x;
           }
           void print();
           void getdata();
};
void An::print()
{
   cout<<endl<<"the value will be: "<<x;
    
}
void An::getdata()
{
    cout<<"enter the value: "<<endl;
    cin>>x;
    //cout<<endl<<"the value will be: "<<x;
    print();
}
int main()
{
    An a;
    An b(10);
    An c(b);
    An D;
    D.getdata();
    a.print();
    b.print();
    c.print();
    return 0;
}    
