#include<iostream>
using namespace std;

class Add
{
    private:int arr[10][10],climit,rlimit;
    public:Add()
           {
            rlimit=0;
            climit=0;
           // arr=NULL;
           } 
           Add(int r,int c)
           {
             rlimit=r;
             climit=c;
            // arr=new int*[rlimit];
             for(int i=0;i<rlimit;i++)
             {
                 for(int j=0;j<climit;j++)
                arr[i][j]=0;
             }
           }
           Add(Add& c)
           {
                rlimit=c.rlimit;
                climit=c.climit;
                 arr=new int*[rlimit];
             for(int i=0;i<rlimit;i++)
             {
                arr[i]=new int[climit];
             }
           }
           Add(const Add& c)
           {
                rlimit=c.rlimit;
                climit=c.climit;
               arr=c.arr;
           }
           ~Add()
           {
            for(int i=0;i<rlimit;i++)
            {
                delete[] arr[i];
            }
            delete[] arr;
           }  
           void get_data();
           Add sum_data( Add& d);
           void print_data();

};

void Add::get_data()
{
    cout<<"the array will be: ";
    for(int i=0;i<rlimit;i++)
    {
        for(int j=0;j<climit;j++)
        {
            cin>>arr[i][j];
        }
    }
}
Add Add::sum_data( Add& d)
{
    if ((rlimit == d.rlimit) && (climit == d.climit)) {
            Add x(rlimit, climit);
            for (int i = 0; i < rlimit; ++i) {
                for (int j = 0; j < climit; ++j) {
                    x.arr[i][j] = arr[i][j] + d.arr[i][j];
                }
            }
            return x;
    }
    else{
    cout<<"not possible";
    return Add();
    }
       
}
void Add::print_data()
{
    if( (rlimit==0)||(climit==0))
    {
        cout<<"empty";
        return;
    }    
        cout<<"the array will be: ";
    for(int i=0;i<rlimit;i++)
    {
        for(int j=0;j<climit;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }        
}
int main()
{
    int rows,cols;
    cout<<"the 1st matrix row and col";
    cin>>rows>>cols;
    Add a_1(rows,cols);
    a_1.get_data();
    cout<<endl;

    cout<<"the 2nd matrix row col";
    cin>>rows>>cols;
    Add a_2(rows,cols);
    a_2.get_data();

    a_1.print_data();
    a_2.print_data();

   Add sum= a_1.sum_data(a_2);
   sum.print_data();

    return 0;

}