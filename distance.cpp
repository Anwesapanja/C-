#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}

    Distance(int ft, float in) : feet(ft), inches(in) {}
  
    Distance operator+(const Distance &d2) const {
        int f = feet + d2.feet;
        float i = inches + d2.inches;
        if (i >= 12.0) {
            i -= 12.0;
            f++;
        }
        return Distance(f, i);
    }

   
    Distance operator-(const Distance &d2) const {
        int f = feet - d2.feet;
        float i = inches - d2.inches;
        if (i < 0) {
            i += 12.0;
            f--;
        }
        return Distance(f, i);
    }

    bool operator==(const Distance &d2) const {
        return (feet == d2.feet && inches == d2.inches);
        return true;
        if (feet == d2.feet && inches < d2.inches)
            return true;
        return false;
    }


    friend std::ostream &operator<<(std::ostream &out, const Distance &d) {
        out << d.feet << " feet " << d.inches << " inches";
         return out;
    }


    friend std::istream &operator>>(std::istream &in, Distance &d) {
        std::cout << "Enter feet: ";
        in >> d.feet;
        std::cout << "Enter inches: ";
        in >> d.inches;
        return in;
    }
};

int main() {
    Distance d1(10, 6.0);
    Distance d2(5, 8.5);
    
    Distance sum = d1 + d2;
     std::cout << "Sum: " << sum << std::endl;

    Distance diff = d1 - d2;
    std::cout << "Difference: " << diff << std::endl;

    std::cout << "Are they equal? " << (d1 == d2 ? "Yes" : "No") << std::endl;

    std::cout << "Is d1 greater than d2? " << (d1 > d2 ? "Yes" : "No") << std::endl;

    std::cout << "Is d1 less than d2? " << (d1 < d2 ? "Yes" : "No") << std::endl;

    Distance d3;
    std::cin >> d3;
    std::cout << "You entered: " << d3 << std::endl;

    return 0;
}