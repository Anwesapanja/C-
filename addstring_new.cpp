#include<iostream>
#include<cstring>

using namespace std;

class My_string
{
    private:char* s;
            int length;
    public:My_string()
            {
                length=0;
                s=new char[length+1];
                s[0]='\0';
            } 
            My_string(const char* A)
            {
                length=strlen(A);
                s=new char[length+1];
                strcpy(s,A);
            }
            My_string(const My_string& C)
            {
                length=C.length;
                s=new char[length+1];
                strcpy(s,C.s);
            }
            /*My_string(const My_string& C)
            {
                length=strlen(C.s);
                s=new char[length+1];
                strcpy(s,C.s);
            }*/
            void join(const My_string& a,const My_string& b)
            {
                //My_string S3;
                length=a.length+b.length;
                delete s;
                s=new char[length+1];
                strcpy(s,a.s);
                strcat(s,b.s);
                display();
            } 
            void display()
            {
                cout<<endl<<s;
            }   
};
int main()
{
    
    My_string R1("Anwesa"),R2("Panja"),R3("Ranu"),S1,S2,S3,S4;
    cout<<"the first+2nd string will be: ";
    S1.join(R1,R2);
    cout << endl <<"the third+2nd string will be: ";
    S2.join(R3,R2);
    S3=My_string(R1);
    cout<<endl<<"the 1st string will be: ";
    S4.join(R1,S3);
    return 0;
}    




    


    
   

    

    





