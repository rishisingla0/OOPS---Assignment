#include <iostream>
using namespace std;

class Student {
private:
    int marks[5];

public:
    void acceptMarks() {
        for (int i = 0; i < 5; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];

            if (marks[i] < 0 || marks[i] > 100) {
                throw marks[i];
            }
        }
    }

    void calculateAverage() {
        int sum = 0;

        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }

        cout << "Average marks = " << sum / 5.0 << endl;
    }
};

int main() {
    Student s;
    bool valid = true;

    try {
        s.acceptMarks();
    }
    catch (int m) {
        cout << "Exception: Invalid marks " << m
             << ". Marks must be between 0 and 100." << endl;
        valid = false;
    }

    if (valid) {
        s.calculateAverage();
    }

    return 0;
}