#include<iostream>
using namespace std;

class Add {
    private:
    int a;
    int b;

    public:
    Add(int a, int b) {
        this->a = a;
        this->b = b;
    }

    friend int sum(Add a);
};

int sum(Add a) {
    cout << "Sum of a and b = " << a.a + a.b << endl;
}

int main() {
    Add a1(10, 20);

    sum(a1);

    return 0;
}