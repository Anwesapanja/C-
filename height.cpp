#include<iostream>
using namespace std;

class Height
{
    private:int feet;
            int inch;
            int cm;
    public:Height()
           {
                feet=0;
                inch=0;
           }  
           Height(int p,int q) 
           {
            feet=p;
            inch=q;
           }  
           int convert()
           {
              if(inch>=12)
              {
                int ft;
                ft=inch/12;
                feet=feet+ft;
                ft=inch%12;
                inch=ft;
              }
              cm=feet*30.48+inch*2.54;
              return(cm);
            } 
            Height operator+(const Height& h)
            {
              Height l;
              l.cm=this->cm+h.cm;
              return (l); 
            }
            int display()
            {
              return cm;
              
            }
            Height operator-(const Height& h)
            {
              Height l;
              l.cm=this->cm-h.cm;
              return (l); 
            }  
            bool operator==(const Height& h)
            {
              if(this->cm==h.cm)
              {
                return (true);
              }
              else
              {
                return (false);
              }
            }
            bool operator<(const Height& h)
            {
              if(this->cm<h.cm)
              {
                return(true);
              }
              else
              {
                return(false);
              }
            }
};

int main()
{
  Height a(5,6);
  a.convert();
  cout<<"the 1st height"<<a.display();
  cout<<"cm";
  Height b(6,6);
  b.convert();
  cout<<endl<<"the 2nd student height"<<b.display();
  cout<<"cm";
  b.display();
  Height c=a+b;
  cout<<endl<<"the sum will be: "<<c.display();
  cout<<"cm";
  Height d=a-b;
  cout<<endl<<"the diff will be: "<<d.display();
  cout<<"cm";
  if(a==b)
  {
    cout<<endl<<"equal";
  }
  else
  {
    cout<<endl<<"unequal";
  }
  if(a<b)
  {
    cout<<endl<<"a min,b max";
  }
  else
  {
    cout<<endl<<"a max,b min";
  }

  return 0;
}