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

    Number operator-(Number n) {
        Number temp(0);
        temp.value = value - n.value;
        return temp;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n1(30), n2(10);

    Number sum = n1 + n2;
    Number difference = n1 - n2;

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    difference.display();

    return 0;
}