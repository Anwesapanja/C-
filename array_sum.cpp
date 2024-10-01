#include<iostream>
using namespace std;

class ARR
{
    private:int A[10],B[10],sum[10],i,n;
    public:void Array_ip_1st();
           void Array_ip_2nd();
           void Array_sum();     
};
void ARR::Array_ip_1st()
{
   cout<<"enter the size of the array: "<<endl;
   cin>>n;
   cout<<"enter the elements of the array: "<<endl;
   for(i=0;i<n;i++)
   {
        cin>>A[i];
   } 
   Array_ip_2nd();
}
void ARR::Array_ip_2nd()
{
   cout<<"enter the size of the array: "<<endl;
   cin>>n;
   cout<<"enter the elements of the array: "<<endl;
   for(i=0;i<n;i++)
   {
        cin>>B[i];
   } 
   Array_sum(); 
}
void ARR::Array_sum()
{
    for(i=0;i<n;i++)
    {
        sum[i]=A[i]+B[i];
    }
    cout<<"the sum of all the elements will be: ";
    for(i=0;i<n;i++)
    {
        cout<<sum[i];
    }
}
int main()
{
    ARR r;
    r.Array_ip_1st();
}