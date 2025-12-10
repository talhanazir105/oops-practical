#include <iostream>
using namespace std;

class Time {
private:
    int hour, minute, second;
public:
    Time(int h = 0, int m = 0, int s = 0) {
        hour = h;
        minute = m;
        second = s;
        displayTime();
    }
    void displayTime() {
        cout << hour << ":" << minute << ":" << second << endl;
    }
    Time operator++() { 
        minute++;
        if (minute >= 60) {
            hour += minute / 60;
            minute %= 60;
        }
        if (hour >= 24) {
            hour %= 24;
        }
        return *this;
    }
    Time operator++(int) { 
        Time temp = *this;
        minute++;
        if (minute >= 60) {
            hour += minute / 60;
            minute %= 60;
        }
        if (hour >= 24) {
            hour %= 24;
        }
        return temp;
    }
    Time operator--() { 
        minute--;
        if (minute < 0) {
            hour--;
            minute = 59;
        }
        if (hour < 0) {
            hour = 23;
        }
        return *this;
    }
    Time operator--(int) { 
        Time temp = *this;
        minute--;
        if (minute < 0) {
            hour--;
            minute = 59;
        }
        if (hour < 0) {
            hour = 23;
        }
        return temp;
    }
};

int main() {
    Time t(12, 30, 0);
    cout << "Initial Time: ";
    t.displayTime();

    ++t;
    cout << "Time after ++t: ";
    t.displayTime();

    t++;
    cout << "Time after t++: ";
    t.displayTime();

    --t;
    cout << "Time after --t: ";
    t.displayTime();

    t--;
    cout << "Time after t--: ";
    t.displayTime();

    return 0;
}