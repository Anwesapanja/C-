#include<iostream>
using namespace std;

class Great
{
    private: int x;
    public:Great()
            {
                x=0;
            }
            Great(int p)
            {
                x=p;
            }
             bool operator > (const Great &obj1)
            {
                if(this->x>obj1.x)
                {
                    return(true);
                }
                else
                {
                    return(false);
                }
                
            }
};

int main()
{
    int a;
    cout<<"enter the 1st number: ";
    cin>>a;
    Great C1(a);
    cout<<endl<<"enter the 2nd number: ";
    cin>>a;
    Great C2(a);
    if(C1>C2)
    {
        cout<<"1st number maxx";
    }
    else
    {
        cout<<"2nd number maxx";
    }
    return 0;
}
 