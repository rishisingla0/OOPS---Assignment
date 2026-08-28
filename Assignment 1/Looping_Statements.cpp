#include <iostream>
using namespace std;

int main() {

    // 1. for loop with initialization, condition and increment
    cout << "For loop - normal:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    }

    cout << endl << endl;


    // 2. for loop without initialization
    cout << "For loop - without initialization:" << endl;

    int i = 0;

    for (; i < 5; i++) {
        cout << i << " ";
    }

    cout << endl << endl;


    // 3. for loop without increment
    cout << "For loop - without increment:" << endl;

    i = 0;

    for (; i < 5;) {
        cout << i << " ";
        i++;
    }

    cout << endl << endl;


    // 4. while loop
    cout << "While loop:" << endl;

    i = 0;

    while (i < 5) {
        cout << i << " ";
        i++;
    }

    cout << endl << endl;


    // 5. do-while loop
    cout << "Do-while loop:" << endl;

    i = 0;

    do {
        cout << i << " ";
        i++;
    } while (i < 5);

    cout << endl << endl;


    // 6. while loop with condition initially false
    cout << "While loop with false condition:" << endl;

    i = 10;

    while (i < 5) {
        cout << i << " ";
        i++;
    }

    cout << "Loop did not execute." << endl << endl;


    // 7. do-while loop with condition initially false
    cout << "Do-while with false condition:" << endl;

    i = 10;

    do {
        cout << i << " ";
        i++;
    } while (i < 5);

    cout << endl;

    return 0;
}