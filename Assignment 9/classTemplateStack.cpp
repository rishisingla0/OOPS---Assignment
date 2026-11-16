#include <iostream>
using namespace std;

template <class T>
class Stack {
private:
    T arr[5];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(T value) {
        if (top == 4) {
            throw "Stack Overflow!";
        }

        arr[++top] = value;
        cout << value << " pushed into stack." << endl;
    }

    T pop() {
        if (top == -1) {
            throw "Stack Underflow!";
        }

        return arr[top--];
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Stack elements: ";

        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    Stack<int> s;

    try {
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        s.push(60);
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    s.display();

    try {
        cout << "Popped element: " << s.pop() << endl;
        cout << "Popped element: " << s.pop() << endl;
        cout << "Popped element: " << s.pop() << endl;
        cout << "Popped element: " << s.pop() << endl;
        cout << "Popped element: " << s.pop() << endl;
        cout << "Popped element: " << s.pop() << endl;
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    s.display();

    return 0;
}