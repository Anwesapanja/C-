#include<iostream>
using namespace std;

class employee{
    private:
        int id;
        int bonus;
        int time;
    public:
        void getpara(int i,int b,int t){
            id=i;
            bonus=b;
            time=t;
        }
        void setpara(){
            cout<<id<<endl;
            cout<<bonus<<endl;
            cout<<time<<endl;
        }
};

int main(){
    employee e1,e2,e3;
    e1.getpara(31,14000,32);
    e2.getpara(9,9870,20);
    e3.getpara(47,11200,25);

    cout<<"New result of employee1 is:"<<endl;
    e1.setpara();
    cout<<"New result of employee2 is:"<<endl;
    e2.setpara();
    cout<<"New result of employee3 is:"<<endl;
    e3.setpara();

    return 0;
}