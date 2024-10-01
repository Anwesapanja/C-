#include <iostream>
#include <cstring>

class String {
private:
    char *str;

public:
    // Dynamic constructor
    String(const char *s = nullptr) {
        if (s == nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }
    }

    // Copy constructor
    String(const String &other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    // Addition of two matrices
    String operator+(const String &other) const {
        String result;
        result.str = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(result.str, str);
        strcat(result.str, other.str);
        return result;
    }

    // Destructor
    ~String() {
        delete [] str;
    }

    // Display function
    void display() const {
        std::cout << str;
    }
};

int main() {
    String s1("Hello, ");
    String s2("world!");

    String s3 = s1 + s2;

    s3.display();

    return 0;
}