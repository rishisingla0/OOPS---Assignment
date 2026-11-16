#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b) {
    if (a > b) {
        return a;
    }

    return b;
}

int main() {
    int a = 10, b = 20;
    float x = 15.5, y = 12.5;

    cout << "Maximum integer = " << maximum(a, b) << endl;
    cout << "Maximum float = " << maximum(x, y) << endl;

    return 0;
}