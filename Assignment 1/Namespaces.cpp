#include <iostream>
using namespace std;

// First namespace
namespace First {
    int value = 10;

    void display() {
        cout << "First namespace" << endl;
        cout << "Value = " << value << endl;
    }
}

// Second namespace
namespace Second {
    int value = 20;

    void display() {
        cout << "Second namespace" << endl;
        cout << "Value = " << value << endl;
    }
}

int main() {

    // Accessing members of First namespace
    First::display();

    cout << endl;

    // Accessing members of Second namespace
    Second::display();

    return 0;
}