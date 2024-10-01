#include<iostream>
using namespace std;
int sum(int a,int b,int c=5)
{
    return a+b+c;
}
int main()
{
    int a=5,c=6;
    cout<<"sum is: "<<sum(a,c);
    return 0;
} 
