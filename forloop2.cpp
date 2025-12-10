#include <iostream>
using namespace std;

int main() {
    int num = 7;
    cout << "Table of " << num << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        int result = num * i;
        cout << num << " x " << i << " = " << result << endl;
    }
    return 0;
}