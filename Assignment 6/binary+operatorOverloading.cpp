#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) {
        value = v;
    }

    Number operator+(Number n) {
        Number temp(0);
        temp.value = value + n.value;
        return temp;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n1(10), n2(20);

    Number n3 = n1 + n2;

    cout << "First object: ";
    n1.display();

    cout << "Second object: ";
    n2.display();

    cout << "Sum: ";
    n3.display();

    return 0;
}