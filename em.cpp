#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int age;
    string department;
    double salary;

public:
    // Constructor
    Employee(string n, int a, string d, double s)
        : name(n), age(a), department(d), salary(s) {}

    // Destructor
    ~Employee() {}

    // Function to display employee information
    void display() {
        cout << "Name: " << name << ", Age: " << age
             << ", Department: " << department
             << ", Salary: $" << salary << endl;
    }
};

int main() {
    // Static initialization of employees
    Employee staticEmployees[3] = {
        Employee("Alice", 30, "HR", 50000.0),
        Employee("Bob", 25, "Engineering", 60000.0),
        Employee("Charlie", 28, "Marketing", 55000.0)
    };

    cout << "Static initialization of employees:" << endl;
    for (int i = 0; i < 3; ++i) {
        staticEmployees[i].display();
    }

    // Dynamic initialization of employees
    int n;
    cout << "\nEnter the number of employees: ";
    cin >> n;
    cin.ignore(); // Clear the input buffer

    Employee* dynamicEmployees = new Employee[n];

    for (int i = 0; i < n; ++i) {
        string name;
        int age;
        string department;
        double salary;

        cout << "\nEnter details for employee " << i + 1 << ":" << endl;
        cout << "Name: ";
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cin.ignore(); // Clear the input buffer
        cout << "Department: ";
        getline(cin, department);
        cout << "Salary: ";
        cin >> salary;
        cin.ignore(); // Clear the input buffer

        dynamicEmployees[i] = Employee(name, age, department, salary);
    }

    cout << "\nDynamic initialization of employees:" << endl;
    for (int i = 0; i < n; ++i) {
        dynamicEmployees[i].display();
    }

    // Deallocate memory for dynamic employees
    delete[] dynamicEmployees;

    return 0;
}