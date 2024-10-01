#include<iostream>
using namespace std;


class Array
{
    int arr[100];
    int n,val;
    public:
    void readArray()
    {
        cout<<"Enter no of elements: "<<endl;
        cin>>n;
        cout<<"Enter the elements in the array:"<<endl;
        for(int i=0;i<n;i++)
        {
        cin>>arr[i];
        }
    }
    void show()
    {        cout<<"the array elements are: "<<endl;
        for(int i=0;i<n;i++)
        {
          cout<<arr[i]<<endl;
        }
    }
    void linear_search()
    {
        cout<<"enter search element: "<<endl;
        cin>>val;
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(val==arr[i]);
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout<<"found";
        }
        else
        {
            cout<<"Not found";
        }
    }
};
int main()
{
    Array a;
    a.readArray();
    a.show();
    a.linear_search();
}
