#include<iostream>
using namespace std;

class Base_class
{
    protected:int real;int imag;
    public:void get_data()
           {
             cout<<"enter the value will be: ";
             cin>>real>>imag;
             print(real,imag);
             put_data();
           } 
           void print(int real,int imag)
           {
            cout<<endl;
            cout<<"the complex number will be:";
            cout<<endl;
            if (imag< 0)
            cout << real << " - " << -imag << "i" << endl;
             else
            cout << real << " + " << imag<< "i" << endl;
           }
           pair<int, int> put_data() const {
            return {real, imag};
           }
};
class Deri_class:protected Base_class
{
    private: int real_1;int imag_1;
    public:Deri_class()
            {
                real_1=0;
                imag_1=0;
            }
            Deri_class(int a,int b)
            {
                real_1=a;
                imag_1=b;
                print(a,b);
            }
            void base()
            {
                get_data();
            } 
            int  add_data()
            {
                int realsum= real+real_1;
                int imagsum=imag+imag_1;
                print(realsum,imagsum);
                //return(realsum,imagsum);
            } 
             
};
class Friend_class:protected Base_class
{ 
    private: int real_2;int imag_2;
    public: Friend_class()
            {
                real_2=0;
                imag_2=0;
            }
              Friend_class (int a,int b)
            {
                real_2=a;
                imag_2=b;
                print(a,b);
            }
            void base()
            {
                get_data();
            } 
            int  diff_data()
            {
                int realdiff= real-real_2;
                int imagdiff=imag-imag_2;
                print(realdiff,imagdiff);
                //return(realdiff,imagdiff);
            } 
};                
int main()
{
    Deri_class d(2,4);
    d.base();
    cout<<"the add complex number:";
    d.add_data();


    cout<<endl;


    Friend_class f(5,6);
    f.base();
    cout<<"the diff complex number: ";
    f.diff_data();
    return 0;
}    
    
