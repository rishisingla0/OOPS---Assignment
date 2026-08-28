#include <iostream>
using namespace std;

class Example {
private:
    // Private member function
    void privateFunction() {
        cout << "Private function called." << endl;
    }

public:
    // Public member function calling private function
    void publicFunction() {
        cout << "Public function called." << endl;

        // Calling private function inside public function
        privateFunction();
    }
};

int main() {
    Example obj;

    // Calling public function
    obj.publicFunction();

    // This would give an error because the function is private:
    // obj.privateFunction();

    return 0;
}