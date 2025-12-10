#include<iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() {
        length = 10;
    }

    void showLength() {
        cout << "Length of Box: " << length << endl;
    }
};

int main() {
    Box b1;
    b1.showLength();  
    return 0;
}
