#include<iostream>
using namespace std;

class Sum {
private:
    int x;

public:
    Sum() {
        x = 0;
    }
    Sum(int p) {
        x = p;
    }

    // Overloaded + operator to perform addition
    Sum operator+ (const Sum &S1) {
        Sum S2;
        S2.x = this->x + S1.x; // Adding the values correctly
        return S2;
    }

    // Getter function to access
    int getX() {
        return x;
    }
};

int main() {
    Sum S0(10);
    Sum S(10);
    Sum S3; // Creating a Sum object without parentheses

    // Adding S0 and S, storing the result in S3
    S3 = S0 + S;

    cout << "The sum will be: " << S3.getX() << endl;

    return 0;
}