#include <iostream>
using namespace std;

const int SIZE = 5;

class Array {
private:
    int arr[SIZE];
public:
    Array() {
        for (int i = 0; i < SIZE; i++) {
            arr[i] = -1;
        }
    }
    void input() {
        cout << "Enter " << SIZE << " array elements: ";
        for (int i = 0; i < SIZE; i++) {
            cin >> arr[i];
        }
    }
    void show() {
        cout << "Array elements: ";
        for (int i = 0; i < SIZE; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int operator==(const Array& obj) {
        for (int i = 0; i < SIZE; i++) {
            if (arr[i] != obj.arr[i]) {
                return 0;
            }
        }
        return 1;
    }
};

int main() {
    Array a1, a2;
    a1.input();
    a2.input();

    cout << "Array 1: ";
    a1.show();
    cout << "Array 2: ";
    a2.show();

    if (a1 == a2) {
        cout << "Both arrays are equal." << endl;
    } else {
        cout << "Both arrays are not equal." << endl;
    }

    return 0;
}