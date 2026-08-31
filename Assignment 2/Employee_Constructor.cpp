#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;
    float salary;

public:
    // Parameterized constructor
    Employee(string n, int i, float s) {
        name = n;
        id = i;
        salary = s;
    }

    // Display employee details
    void displayDetails() {
        cout << "Employee Details" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee employee("Rishi", 101, 50000);

    employee.displayDetails();

    return 0;
}