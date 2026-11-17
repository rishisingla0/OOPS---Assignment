#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> students;
    int n, rollNo;

    string name;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter name: ";
        cin >> name;

        students[rollNo] = name;
    }

    cout << "\nStudent Records:" << endl;

    for (auto s : students) {
        cout << "Roll No: " << s.first
             << ", Name: " << s.second << endl;
    }

    cout << "\nEnter roll number to search: ";
    cin >> rollNo;

    auto it = students.find(rollNo);

    if (it != students.end()) {
        cout << "Student found: " << it->second << endl;
    } else {
        cout << "Student not found." << endl;
    }

    return 0;
}