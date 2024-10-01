#include<iostream>
using namespace std;

class Add
{
private:
    int **arr;
    int rlimit, climit;

public:
    // Default constructor
    Add() : rlimit(0), climit(0), arr(nullptr) {}

    // Parameterized constructor
    Add(int r, int c) : rlimit(r), climit(c)
    {
        arr = new int*[rlimit];
        for (int i = 0; i < rlimit; i++)
        {
            arr[i] = new int[climit]();
        }
    }

    // Copy constructor
    Add(const Add &a)
    {
        rlimit = a.rlimit;
        climit = a.climit;
        arr = new int*[rlimit];
        for (int i = 0; i < rlimit; i++)
        {
            arr[i] = new int[climit];
            for (int j = 0; j < climit; j++)
            {
                arr[i][j] = a.arr[i][j];
            }
        }
    }

    // Destructor to free allocated memory
    ~Add()
    {
        for (int i = 0; i < rlimit; i++)
        {
            delete[] arr[i];
        }
        delete[] arr;
    }

    // Addition operator
    Add operator+(const Add &b)
    {
        if ((rlimit == b.rlimit) && (climit == b.climit))
        {
            Add B(rlimit, climit);
            for (int i = 0; i < rlimit; i++)
            {
                for (int j = 0; j < climit; j++)
                {
                    B.arr[i][j] = arr[i][j] + b.arr[i][j];
                }
            }
            return B;
        }
        else
        {
            cout << "Addition not possible due to different dimensions." << endl;
            return Add(); // Return an empty Add object
        }
    }

    // Display function
    void display() const
    {
        cout << "The array is: " << endl;
        for (int i = 0; i < rlimit; i++)
        {
            for (int j = 0; j < climit; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Add d(2, 3);
    Add d1(d);
    Add d3 = d + d1;
    d3.display();
    return 0;
}
