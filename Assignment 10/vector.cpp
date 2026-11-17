#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers(5);
    int sum = 0;

    cout << "Enter 5 integers: ";

    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    cout << "Vector elements: ";

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
        sum += numbers[i];
    }

    cout << endl;
    cout << "Sum = " << sum << endl;

    return 0;
}