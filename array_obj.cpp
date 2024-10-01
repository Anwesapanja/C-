#include<iostream>
using namespace std;
class Array_new
{
    private: int *A,size;
    public: void Array(int s)
            {
                size=s;
                A=new int[size];
                cout<<"enter the elements of the array";
                for(int i=0;i<size;i++)
                {
                    cin>>A[i];
                }
                cout<<"the array elements: "<<endl;
                for(int i=0;i<size;i++)
                {
                    cout<<A[i]<<endl;
                }
            }
};
int main()
{
    int s,A[s];
    Array_new b;
    cout<<"enter the size of the array"<<endl;
    cin>>s;
    b.Array(s);
    return 0;
}              

