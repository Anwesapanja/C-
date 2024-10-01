#include<iostream>
using namespace std;

class Sum
{
    private: int x;
    public:Sum()
            {
                x=0;
            }
            Sum(int p)
            {
                x=p;
            }
            Sum operator+ (const Sum &S1)
            {
                Sum S2;
                S2=S1.x+this->x;
                return (S2);
            }
            int getx()
            {
                return x;
            }
            
};
int main()
{
    int a;
    cout<<"enter a value: "<<endl;
    cin>>a;
    Sum S0(a);
    cout<<"enter a value: "<< endl;
    cin>>a;
    Sum S(a);
    Sum S3;
    S3=S0+S;
    cout<<"the sum will be:  " << S3.getx() << endl;
    return 0;

}