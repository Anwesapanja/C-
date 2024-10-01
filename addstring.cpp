#include<iostream>
#include<string.h>
using namespace std;

class My_string
{
    private:char* s;
    public: My_string()
            {
                strcpy(s,'\0');
            }
            My_string(My_string& str)
            {
                strcpy(s,str.s);
            }
            void Add_string(My_string S1,My_string S2)
            {
                My_string S3;
                int l1,l2;
                l1=strlen(S1.s);
                cout<<"the length of the 1st string will be: "<<endl<<l1;
                l2=strlen(S2.s);
                cout<<"the length of the 2nd string will be: "<<endl<<l2'
                S3=S1+S2;
                S3.display();
            }
            void display()
            {
                cout<<endl<<"the string will be: "<<s;
            }  
};
int main()
{
    string a, b;
    cout<<"the 1st and 2nd string will be: "<<endl;
    getline(cin,a);
    getline(cin,b);
   

    }


   


