#include <iostream>
using namespace std;

int main() {
    cout << "Step 1: Start" << endl;
    goto end_process;
    cout << "Step 2: This code is ignored." << endl;

end_process: 
    cout << "Step 3: Process finished." << endl;
    return 0;
}