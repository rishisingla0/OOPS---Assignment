#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers;

    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_front(10);
    numbers.push_front(5);

    cout << "Original list: ";

    for (int x : numbers) {
        cout << x << " ";
    }

    numbers.remove(20);

    cout << endl;
    cout << "After removing 20: ";

    for (int x : numbers) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}