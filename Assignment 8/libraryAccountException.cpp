#include <iostream>
using namespace std;

class LibraryAccount {
private:
    int availableBooks;

public:
    LibraryAccount(int books) {
        availableBooks = books;
    }

    void issueBook(int quantity) {
        if (quantity > availableBooks) {
            throw quantity;
        }

        availableBooks -= quantity;

        cout << quantity << " books issued successfully." << endl;
        cout << "Remaining books: " << availableBooks << endl;
    }
};

int main() {
    LibraryAccount account(10);

    int quantity;

    cout << "Available books: 10" << endl;
    cout << "Enter number of books to issue: ";
    cin >> quantity;

    try {
        if (quantity <= 0) {
            throw "Invalid number of books.";
        }

        account.issueBook(quantity);
    }
    catch (int q) {
        cout << "Exception: Requested " << q
             << " books, but not enough books are available." << endl;
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}