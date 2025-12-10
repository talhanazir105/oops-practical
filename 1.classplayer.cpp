#include <iostream>
#include <string>
using namespace std;

class Player {
    string name;
    double average;
    string team;

public:
    // Constructor
    Player(string n = "", double avg = 0, string t = "") {
        name = n;
        average = avg;
        team = t;
    }

    // Function to input details
    void input() {
        cout << "Enter Player Name: ";
        cin >> name;
        cout << "Enter Batting Average: ";
        cin >> average;
        cout << "Enter Team Name: ";
        cin >> team;
    }

    // Function to change details
    void change() {
        cout << "Enter new average: ";
        cin >> average;
        cout << "Enter new team: ";
        cin >> team;
    }

    // Function to display details
    void display() {
        cout << "\nPlayer Name: " << name;
        cout << "\nAverage: " << average;
        cout << "\nTeam: " << team << endl;
    }
};

int main() {
    Player p;
    p.input();
    p.display();
    p.change();
    p.display();
    return 0;
}
