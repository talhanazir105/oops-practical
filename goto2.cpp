#include <iostream>
using namespace std;

int main() {
    int counter = 1;
start_loop:
    cout << "Count: " << counter << endl;
    counter++;

    if (counter <= 3) {
        goto start_loop;
    }
    return 0;
}
