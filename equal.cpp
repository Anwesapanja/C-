#include<iostream>
using namespace std;

class Equal
{
    private:int n;
    public:Equal()
            {
                n=0;
            }
            Equal(int p)
            {
                n=p;
            }
            bool operator ==(const Equal& obj)
            {
                if(this->n == obj.n)
                {
                    return (true);
                }
                else
                {
                    return (false);
                }
            }              

};
int main()
{
    int a;
    cout<<"the number will be: ";
    cin>>a;
    Equal C1(a);
    cout<<endl<<"enter another number: ";
    cin>>a;
    Equal C2(a);
    if(C1==C2)
    {
        cout<<"Equal";
    }
    else{
        cout<<"not equal";
    }
    return 0;
}