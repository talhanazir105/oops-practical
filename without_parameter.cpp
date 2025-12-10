#include <iostream>
using namespace std;

class teaShop
{
public:
    void orderTea()
    {
        string type;
        int qty, price;
        cout << "Enter Tea Type (Milk-Tea/Green-Tea/Lemon-Tea):";
        cin >> type;
        cout << "Enter Quantity (Cups): ";
        cin >> qty;
        if (type == "Milk-Tea")
            price = 100;
        else if (type == "Green-Tea")
            price = 80;
        else
            price = 70;

        cout << "\n--- Bill ---"<<endl;
        cout << "Tea Type:" << type << endl;
        cout << "Quantity (Cups):" << qty << endl;
        cout << "Total Price: Rs " << price * qty << endl;
    }
};

int main()
{
    teaShop t;
    t.orderTea();
    return 0;
}