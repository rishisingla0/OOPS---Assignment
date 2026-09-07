#include<iostream>
using namespace std;

class Employee {
    private:
    double salary;

    public:
    Employee(double salary) {
        this->salary = salary;
    }

    friend void compare(Employee e1, Employee e2);
};

void compare(Employee e1, Employee e2) {
    if(e1.salary > e2.salary) {
        cout << "Salary of e1 is greater than e2" << endl;
    } else if(e2.salary > e1.salary) {
        cout << "Salary of e2 is greater than e1" << endl;
    } else {
        cout << "Both the employees have same salary";
    }
}

int main() {
    Employee e1(10000);
    Employee e2(20000);

    compare(e1, e2);

    return 0;
}