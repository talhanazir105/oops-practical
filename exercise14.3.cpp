#include <iostream>
using namespace std;

class MyArray {
private:
    int arr[5]; // Misaal ke tor par size 5 rakha hai

public:
    // Constructor initializes array elements to -1
    MyArray() {
        for(int i=0; i<5; i++) {
            arr[i] = -1;
        }
    }

    // Input function
    void input() {
        cout << "Enter 5 numbers: ";
        for(int i=0; i<5; i++) {
            cin >> arr[i];
        }
    }

    // Show function
    void show() {
        for(int i=0; i<5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Overload == operator to compare two objects
    int operator ==(MyArray obj) {
        for(int i=0; i<5; i++) {
            if(arr[i] != obj.arr[i]) {
                return 0; // Agar koi bhi value match na kare to 0 return karo
            }
        }
        return 1; // Agar sab match kar jayen to 1 return karo
    }
};

int main() {
    MyArray a1, a2;

    cout << "Input for Object 1:" << endl;
    a1.input();

    cout << "Input for Object 2:" << endl;
    a2.input();

    // Comparing objects
    if (a1 == a2) {
        cout << "\nBoth arrays are SAME.";
    } else {
        cout << "\nArrays are DIFFERENT.";
    }

    return 0;
}