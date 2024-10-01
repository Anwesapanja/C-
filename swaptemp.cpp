#include<iostream>
using namespace std;

template<typename T>

class Myclass
{
    public: void swap( T a,T b)
    {
        T temp;
        temp=a;
        a=b;
        b=temp;
        cout<<"the swap value will be: "<<a<<b;
    }
};

int main()
{
    Myclass<int>intr;
    intr.swap(5,6);
    Myclass<string>stringr;
    stringr.swap("Hello","World");
    return 0;
}    
