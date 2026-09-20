#include <iostream>
using namespace std;

class College {
protected:
    string collegeName;

public:
    College(string c) {
        collegeName = c;
        cout << "College Constructor Called" << endl;
    }
};

class Department : public College {
private:
    string departmentName;

public:
    Department(string c, string d) : College(c) {
        departmentName = d;
        cout << "Department Constructor Called" << endl;
    }

    void display() {
        cout << "\nCollege: " << collegeName << endl;
        cout << "Department: " << departmentName << endl;
    }
};

int main() {
    Department d("TIET", "Computer Science");

    d.display();

    return 0;
}