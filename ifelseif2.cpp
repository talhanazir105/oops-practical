#include <iostream>
using namespace std;

int main() {
    int temperature = 15; 

    if (temperature > 30) {
        cout << "It's a hot day (summer)." << endl;
    } else if (temperature >= 20) {
        cout << "It's a pleasant day (spring/autumn)." << endl;
    } else if (temperature >= 10) {
        cout << "It's cool (winter starting)." << endl;
    } else {
        cout << "It's freezing cold!" << endl;
    }
    return 0;
}
