#include <iostream>
using namespace std;

template <class T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Before swapping integers: " << x << " " << y << endl;
    swapValues(x, y);
    cout << "After swapping integers: " << x << " " << y << endl;

    char a = 'A', b = 'B';

    cout << "Before swapping characters: " << a << " " << b << endl;
    swapValues(a, b);
    cout << "After swapping characters: " << a << " " << b << endl;

    return 0;
}