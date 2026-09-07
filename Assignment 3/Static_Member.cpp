#include<iostream>
using namespace std;

class Student {

    private:
    static int count;

    public:
    Student() {
        count++;
    }

    friend void count(Student s);
};

int Student :: count = 0;

void count(Student s) {
    cout << "Count = " << s.count << endl;
}

int main() {
    Student s1;
    Student s2;
    Student s3;

    count(s3);

    return 0;
}