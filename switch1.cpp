#include <iostream>
#include <string>
using namespace std;

int main() {
    int day_num = 3; 

    cout << "Checking Day Number " << day_num << "..." << endl;

    switch (day_num) {
        case 1:
            cout << "It's Monday." << endl;
            break; 
        case 2:
            cout << "It's Tuesday." << endl;
            break;
        case 3:
            cout << "It's Wednesday." << endl;
            break;
        case 4:
            cout << "It's Thursday." << endl;
            break;
        case 5:
            cout << "It's Friday." << endl;
            break;
        default: 
            cout << "It's the Weekend or Invalid Day Number." << endl;
    }
    return 0;
}
