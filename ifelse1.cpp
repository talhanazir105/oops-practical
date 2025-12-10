#include <iostream>
#include <string>
using namespace std;

int main() {
    int marks = 45;
    int passing_marks = 50;

    if (marks >= passing_marks) {
        string status = "Congratulations! You have passed.";
        cout << status << endl;
    } else {
        string status = "Unfortunately, you have failed. Try again.";
        cout << status << endl;
    }
    return 0;
}
