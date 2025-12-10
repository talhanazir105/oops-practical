#include <iostream>
using namespace std;

class DB; // forward declaration

class DM {
    int meters, centimeters;
public:
    DM(int m = 0, int c = 0) : meters(m), centimeters(c) {}
    friend void addDistance(DM, DB);
};

class DB {
    int feet, inches;
public:
    DB(int f = 0, int i = 0) : feet(f), inches(i) {}
    friend void addDistance(DM, DB);
};

void addDistance(DM d1, DB d2) {
    float totalMeters = d1.meters + d1.centimeters / 100.0 + (d2.feet * 0.3048) + (d2.inches * 0.0254);
    int m = totalMeters;
    int cm = (totalMeters - m) * 100;
    cout << "\nTotal Distance: " << m << " meters " << cm << " centimeters\n";
}

int main() {
    DM dm(3, 50);
    DB db(10, 5);
    addDistance(dm, db);
    return 0;
}
