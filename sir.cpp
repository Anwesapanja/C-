#include<iostream>
#include<cstring>

class String {

    private:
    
    u_int m_len; //আনসাইন্ড ইন্টিজার 
    char* m_buff;

    public:

    // Default constructor 
    String () {
       m_len = 0;
       m_buff = new char;
       m_buff[0] = '\0';
    }

    / / Parameterized constructor 
    String (const char * str) {
       m_len = strlen(str);
       m_buff = new char[m_len + 1]; জায়গা তৈরী হল। 
       strcpy(m_buff, str);
    }

    // Overloading of = / assignment operator for String class. 
    / / Overload is needed to avoid dangling pointer that would cause errors. 
    String& operator = (const String& obj) {
        if (this != &obj) { 
 // If the source obj is same as the destn object, no need to copy. 
            m_len = obj.m_len;
            delete [] m_buff; 
 // Delete the old buffer of the destination object. 
            m_buff = new char[m_len+1];
            strcpy(m_buff, obj.m_buff);
            return (*this);
        }
        return (*this);
    }

    ~String() {
       std :: cout << "Destructor got called." << std :: endl;
       if (m_buff) {
           delete [] m_buff;
       }
    }

    void Display() {
        std :: cout << m_buff << std :: endl;
    }
};

int main() {

   String s1("Anwesha");
   String s2("Panja");

   std :: cout << "String s1 : ";
   s1.Display();

   std :: cout << "String s2 : ";
   s2.Display();

   s1 = s2;
   std :: cout << "After assignment, String s1 : " ;
   s1.Display();

   std :: cout << "Main ends. Now returning" << std :: endl;
   return 0;
}