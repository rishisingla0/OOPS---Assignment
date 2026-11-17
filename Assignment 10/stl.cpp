#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {50, 10, 40, 20, 30};

    sort(numbers.begin(), numbers.end());

    cout << "Sorted vector: ";

    for (int x : numbers) {
        cout << x << " ";
    }

    int key;

    cout << "\nEnter element to search: ";
    cin >> key;

    if (binary_search(numbers.begin(), numbers.end(), key)) {
        cout << key << " found in vector." << endl;
    } else {
        cout << key << " not found in vector." << endl;
    }

    return 0;
}