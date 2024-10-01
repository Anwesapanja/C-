#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

    bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    int daysInMonth(int month, int year) {
        switch (month) {
            case 2:
                return isLeapYear(year) ? 29 : 28;
            case 4:
            case 6:
            case 9:
            case 11:
                return 30;
            default:
                return 31;
        }
    }

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {
        if (!isValid()) {
            std::cerr << "Invalid date!" << std::endl;
            exit(1);
        }
    }

    bool isValid() {
        if (year < 0 || month < 1 || month > 12 || day < 1 || day > daysInMonth(month, year)) {
            return false;
        }
        return true;
    }

    void display() {
        std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    }

    void operator++() {
        day++;
        if (day > daysInMonth(month, year)) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }
};

int main() {
    Date today(31, 12, 2023);
    today.display();

    ++today; // Incrementing the date
    today.display();

    return 0;
}