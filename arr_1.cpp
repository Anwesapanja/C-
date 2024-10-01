#include<iostream>
using namespace std;

class Add
{
    private:int **arr,rlimit,climit;
    public:Add()
           {
            rlimit=0;
            climit=0;
            arr=NULL;
           } 
           Add(int r,int c)
           {
            rlimit=r;
            climit=c;
            arr=new int*[r];
            for(int i=0;i<r;i++)
            {
                    *arr=new int[c];
            }        
            }
            void get_data()
            {
                cout<<"enter the array: ";
                for(int i=0;i<rlimit;i++)
                {
                    for(int j=0;j<climit;j++)
                    {
                        cin>>arr[i][j];
                    }
                }
            }
           Add(const Add &a)
           {
            rlimit=a.rlimit;
            climit=a.climit;
            arr=new int*[rlimit];
            for(int i=0;i<rlimit;i++)
            {
                    arr[i]=new int[climit];
             
             for (int j = 0; j < climit; j++)
            {
                arr[i][j] = a.arr[i][j];
            } 
            }      
            
           }

           Add operator+(const Add &b)
           {
            Add B(rlimit,climit);
            if((rlimit==b.rlimit)&&(climit==b.climit))
            {
                for(int i=0;i<rlimit;i++)
                {
                    for(int j=0;j<climit;j++)
                    {
                        B.arr[i][j]=this->arr[i][j]+b.arr[i][j];
                        //return B[i][j];
                    }
                }
                return B;
            }
            else
            {
                cout<<"not possible";
            }
           }

           void display()const
           {
                cout<<"the array will be: ";
               for(int i=0;i<rlimit;i++)
                {
                    for(int j=0;j<climit;j++)
                    {
                        cout<<arr[i][j]<<endl;
                    }
                }          
           }
};

int main()
{
    Add d(2,3);
    cout<<"enter the 1st array value: ";
    d.get_data();
    d.display();
    Add d1(d);
    //Add d1(2,3);
    cout<<"the 2nd array value will be: ";
    d1.get_data();

    Add d3=d+d1;
    cout<<"the result will be: ";
    d3.display();
    return 0;
}
