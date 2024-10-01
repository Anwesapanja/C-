#include <iostream>
using namespace std;

template<typename T>
class Stack {
private:
    T* arr;
    int top;
    int size;

public:
    Stack(int s) {
        size = s;
        arr = new T[size];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(T val) {
        if (top >= size - 1) {
            cout << "\nStack overflow. Cannot perform push." << endl;
            return;
        }
        arr[++top] = val;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack underflow condition. Cannot perform pop." << endl;
        } else {
            T val = arr[top--];
            cout << "Popped value: " << val << endl;
        }
    }

    void display() const {
        if (top == -1) {
            cout << "No values in the stack." << endl;
        } else {
            cout << "The stack is: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int a;
    cout << "Enter the size of the stack: ";
    cin >> a;

    Stack<int> intr(a);
    intr.push(10);
    intr.push(20);
    intr.push(30);
    intr.pop();
    intr.display();

    Stack<string> stringr(a);
    stringr.push("Hello");
    stringr.push("world");
    stringr.push("ranu");
    stringr.push("panja");
    stringr.push("Anwesa");
    stringr.pop();
    stringr.display();

    return 0;
}