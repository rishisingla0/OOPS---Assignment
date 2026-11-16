#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    try {
        if (num < 0) {
            throw "Number cannot be negative.";
        }

        if (num > 100) {
            throw num;
        }

        cout << "Valid number: " << num << endl;
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }
    catch (int n) {
        cout << "Exception: Number " << n << " is greater than 100." << endl;
    }

    return 0;
}