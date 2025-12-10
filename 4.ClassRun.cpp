#include <iostream>
#include <string>
using namespace std;

class Run {
    string name;
    float distance;
    static float longest;
    static string bestRunner;

public:
    void getData() {
        cout << "Enter runner name: ";
        cin >> name;
        cout << "Enter distance covered: ";
        cin >> distance;

        if (distance > longest) {
            longest = distance;
            bestRunner = name;
        }
    }

    void showData() {
        cout << "Runner: " << name << "  Distance: " << distance << endl;
    }

    static void showLongest() {
        cout << "\nLongest distance covered by: " << bestRunner
             << " (" << longest << " meters)\n";
    }
};

float Run::longest = 0;
string Run::bestRunner = "";

int main() {
    Run r1, r2, r3;
    r1.getData();
    r2.getData();
    r3.getData();

    r1.showData();
    r2.showData();
    r3.showData();

    Run::showLongest();
    return 0;
}
