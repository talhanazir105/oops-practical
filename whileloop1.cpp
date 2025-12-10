#include <iostream>
using namespace std;

int main() {
    int password;
    cout << "Enter the password (1234): ";
    cin >> password;
    while (password != 1234) {
        cout << "Incorrect! Try again: ";
        cin >> password;
    }

    cout << "Access Granted!" << endl;
    return 0;
}
