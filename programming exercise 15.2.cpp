#include <iostream>
using namespace std;


class LocalPhone {
protected:
    unsigned long long phone; 

public:
    void input() {
        cout << "Enter Local Phone Number: ";
        cin >> phone;
    }

    void show() {
        cout << "Local Phone: " << phone << endl;
    }
};


class NatPhone : public LocalPhone {
protected:
    int city_code;

public:
    void input() {
        cout << "Enter City Code: ";
        cin >> city_code;
       
        LocalPhone::input();
    }

    void show() {
        cout << "City Code: " << city_code << endl;
        
        LocalPhone::show();
    }
};


class IntPhone : public NatPhone {
private:
    int country_code;

public:
    void input() {
        cout << "Enter Country Code: ";
        cin >> country_code;
        
        NatPhone::input();
    }

    void show() {
        cout << "\n--- Full Phone Details ---" << endl;
        cout << "Country Code: " << country_code << endl;
       
        NatPhone::show();
    }
};

int main() {
   
    IntPhone myPhone;

    cout << "=== INPUT DATA ===" << endl;
   
    myPhone.input(); 

    cout << "=== OUTPUT DATA ===" << endl;
    
    myPhone.show();

    return 0;
}