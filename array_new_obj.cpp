#include<iostream>
using namespace std;

class Array
{
    private: int marks;
    public: void getmarks();
            void printmarks();
};
void Array:: getmarks()
{
    cout<<"the marks will be: "<<endl;
    cin>>marks;
} 
void Array::printmarks()
{
    cout<<endl<<"the printing marks will be: "<<marks;
} 

int main()
{
    Array a[4];
    for(int i=1;i<=4;i++)
    {
        cout<<"the member no: "<<i<<endl;
        a[i].getmarks();
        a[i].printmarks();
    }
    return 0;
}