#include<iostream>
using namespace std;

class Mammal
{
    public:void print()
               {
                 cout<<"produce milk to feed their young"<< endl << "have hair or fur";
               } 
};
class Harbi:protected Mammal
{
    public: void print_har()
            {
                cout<<"Harbivorous: ";
                print();
                cout<<endl<<"physiologically and anatomically adapted to feed on plant material";
            }
};
class Carni:protected Mammal
{
    public: void print_car()
            {
                cout<<endl <<"Carnivorous: ";
                print();
                cout<<endl <<"Carnivorous animals have specialized dentition to hunt and kill prey.";
            }
};
class Omni:protected Mammal
{
    public: void print_omni()
            {
                cout<<endl<<"Omnivorous: ";
                print();
                cout<<endl <<"regularly consumes a variety of material, including plants, animals, algae, and fungi";
            }
};

int main()
{
    Harbi a;
    a.print_har();
    Carni b;
    b.print_car();
    Omni c;
    c.print_omni();
    return 0;
}
