#include <iostream>
#include <string>
using namespace std;

int main() {
    string light = "Yellow";

    if (light == "Green") {
        cout << "Go now." << endl;
    } else if (light == "Yellow") { 
        cout << "Wait or Prepare to stop." << endl;
    } else if (light == "Red") { 
        cout << "Stop immediately." << endl;
    } else {
        cout << "Error: Invalid light color." << endl;
    }
    return 0;
}
