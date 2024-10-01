#include<iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    void get_data();
    bool valid_date();  
};

void Date::get_data() {
    cout << "Enter the day, month, and year: ";
    cin >> day >> month >> year;
}

bool Date::valid_date() {
    int days_in_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_month[2] = 29; // Leap year, February has 29 days
    }

    if (month >= 1 && month <= 12) {
        if (day >= 1 && day <= days_in_month[month]) {
            return true;
        }
    }
    return false;
}

int main() {
    Date d;
    d.get_data();
    if (d.valid_date()) {
        cout << "Valid date";
    } else {
        cout << "Invalid date";
    }
    return 0;
}