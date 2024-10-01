#include <iostream>
using namespace std;

class Add {
private:
    int **arr;
    int climit, rlimit;

public:
    // Default constructor
    Add() : arr(NULL), climit(0), rlimit(0) {}

    // Parameterized constructor
    Add(int r, int c) : climit(c), rlimit(r) {
        arr = new int*[rlimit];
        for (int i = 0; i < rlimit; ++i) {
            arr[i] = new int[climit];
        }
    }

    // Copy constructor (deep copy)
    Add(const Add& c) : climit(c.climit), rlimit(c.rlimit) {
        arr = new int*[rlimit];
        for (int i = 0; i < rlimit; ++i) {
            arr[i] = new int[climit];
            for (int j = 0; j < climit; ++j) {
                arr[i][j] = c.arr[i][j];
            }
        }
    }

    // Destructor
    ~Add() {
        for (int i = 0; i < rlimit; ++i) {
            delete[] arr[i];
        }
        delete[] arr;
    }

    // Method to get data
    void get_data() {
        cout << "Enter the elements of the array: " << endl;
        for (int i = 0; i < rlimit; ++i) {
            for (int j = 0; j < climit; ++j) {
                cin >> arr[i][j];
            }
        }
    }

    // Method to add two matrices
    Add sum_data(const Add& d) const {
        if ((rlimit == d.rlimit) && (climit == d.climit)) {
            Add x(rlimit, climit);
            for (int i = 0; i < rlimit; ++i) {
                for (int j = 0; j < climit; ++j) {
                    x.arr[i][j] = arr[i][j] + d.arr[i][j];
                }
            }
            return x;
        } else {
            cout << "Matrices cannot be added due to different dimensions." << endl;
            return Add();
        }
    }

    // Method to print the array
    void print_data() const {
        if (rlimit == 0 || climit == 0) {
            cout << "Empty matrix" << endl;
            return;
        }
        cout << "The array is: " << endl;
        for (int i = 0; i < rlimit; ++i) {
            for (int j = 0; j < climit; ++j) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols;
    
    // Input and create the first matrix
    cout << "Enter the rows and columns for the 1st matrix: ";
    cin >> rows >> cols;
    Add a_1(rows, cols);
    a_1.get_data();
    cout << endl;

    // Input and create the second matrix
    cout << "Enter the rows and columns for the 2nd matrix: ";
    cin >> rows >> cols;
    Add a_2(rows, cols);
    a_2.get_data();
    cout << endl;

    // Print both matrices
    cout << "Matrix 1:" << endl;
    a_1.print_data();
    cout << "Matrix 2:" << endl;
    a_2.print_data();

    // Add the matrices and print the result
    Add sum = a_1.sum_data(a_2);
    cout << "Sum of matrices:" << endl;
    sum.print_data();

    return 0;
}