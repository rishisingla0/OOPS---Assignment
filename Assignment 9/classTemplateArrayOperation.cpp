#include <iostream>
using namespace std;

template <class T>
class ArrayOperations {
private:
    T arr[5];

public:
    void acceptElements() {
        cout << "Enter 5 elements: ";

        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "Array elements: ";

        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    void findLargest() {
        T largest = arr[0];

        for (int i = 1; i < 5; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }

        cout << "Largest element = " << largest << endl;
    }
};

int main() {
    ArrayOperations<int> obj;

    obj.acceptElements();
    obj.display();
    obj.findLargest();

    return 0;
}