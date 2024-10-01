#include <iostream>
#include <cstring>
using namespace std;

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
    //assignment
    String operator=(const String &other)
    {
        {
        if (str != other.str) 
            {
            delete[] str;
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
            }
        }
        return str;


    }
    //equality check
    bool operator==(const String& other)const
    {
        if((str)==(other.str))
        {
            return(true);
        }
        else
        {
            return(false);
        }
    }
    bool operator>(const String& other)const
    {
        if(strlen(str)>strlen(other.str))
        {
            return(true);
        }
        else
        {
            return(false);
        }
    }
    // Destructor
    ~String() {
        delete [] str;
    }

    // Display function
    void display() const {
        cout << str;
    }
};

int main() {
    String s1("Academy");
    String s2("Technology!");

    String s3 = s1 + s2;

    s3.display();

    cout<<endl;
    if(s1==s2)
    {
        cout<<"equal";
    }
    else{
        cout<<"not equal";
    }

    cout<<endl;
    if(s1>s2)
    {
        cout<<"1st string max than 2nd string";
    }
    else
    {
        cout<<"2nd string max than 1st length";
    }
    cout<<endl;
    s1=s2;
    s1.display();


    return 0;
}