#include <iostream>
#include <string>
using namespace std;

class Car {
    string name;
    char direction; // E, W, N, S
    int position;

public:
    // Constructor
    Car(string n = "Unknown", char d = 'N', int p = 0) {
        name = n;
        direction = d;
        position = p;
    }

    // Turn function to change direction by one step
    void turn() {
        if (direction == 'E') direction = 'S';
        else if (direction == 'S') direction = 'W';
        else if (direction == 'W') direction = 'N';
        else if (direction == 'N') direction = 'E';
    }

    // Overloaded turn function to directly set direction
    void turn(char newDirection) {
        direction = newDirection;
    }

    // Move function to change position
    void move(int dist) {
        position += dist;
    }

    void display() {
        cout << "\nCar: " << name
             << "\nDirection: " << direction
             << "\nPosition: " << position << endl;
    }
};

int main() {
    Car c1("Honda", 'E', 0);
    c1.display();
    c1.move(10);
    c1.turn();
    c1.display();
    c1.turn('N');
    c1.move(20);
    c1.display();
    return 0;
}
