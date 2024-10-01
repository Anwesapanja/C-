#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int age;
    std::string department;
    double salary;

public:
    // Constructor
    Employee() {
        name = "";
        age = 0;
        department = "";
        salary = 0.0;
    }

    Employee(std::string empName, int empAge, std::string empDepartment, double empSalary) {
        name = empName;
        age = empAge;
        department = empDepartment;
        salary = empSalary;
    }

    // Destructor
    ~Employee() {
        // Destructor code (if any)
    }

    // Function to set employee details
    void setDetails(std::string empName, int empAge, std::string empDepartment, double empSalary) {
        name = empName;
        age = empAge;
        department = empDepartment;
        salary = empSalary;
    }

    // Function to display employee details
    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Department: " << department << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
    int n;
    std::cout << "Enter the number of employees: ";
    std::cin >> n;

    // Static initialization of objects
    Employee emp1("John", 30, "HR", 50000.0);
    emp1.display();

    std::cout << std::endl;

    // Dynamic initialization of objects
    Employee* empArray = new Employee[n];
    for (int i = 0; i < n; ++i) {
        std::string name, department;
        int age;
        double salary;

        std::cout << "Enter details for employee " << i + 1 << std::endl;
        std::cout << "Name: ";
        std::cin >> name;
        std::cout << "Age: ";
        std::cin >> age;
        std::cout << "Department: ";
        std::cin >> department;
        std::cout << "Salary: ";
        std::cin >> salary;

        empArray[i].setDetails(name, age, department, salary);
    }

    // Displaying employee details
    std::cout << "\nEmployee Details:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "Employee " << i + 1 << ":\n";
        empArray[i].display();
        std::cout << std::endl;
    }

    // Deallocating memory for dynamic array
    delete[] empArray;

    return 0;
}