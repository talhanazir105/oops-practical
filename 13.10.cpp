#include <iostream>
#include <string>
using namespace std;
class TV
{
public:
    TV(char Brand[], char Mod[], float Price);
    void Change(char Brand[], char Mod[], float Price);
    void Display();

private:
    char BrandName[20];
    char Model[10];
    float RetailPrice;
};

TV::TV(char Brand[], char Mod[], float Price)
{
    strcpy(BrandName, Brand);
    strcpy(Model, Mod);
    RetailPrice = Price;
}

void TV::Change(char Brand[], char Mod[], float Price)
{
    strcpy(BrandName, Brand);
    strcpy(Model, Mod);
    RetailPrice = Price;
}

void TV::Display()
{
    cout << "Brand Name: " << BrandName << endl;
    cout << "Model: " << Model << endl;
    cout << "Price: " << RetailPrice << endl;
}

int main()
{
    TV Test("SONY", "HDTV", 25000);
    cout << "Displaying the object..." << endl;
    Test.Display();

    Test.Change("Toshiba", "STDV", 22000);
    cout << "Displaying object after change..." << endl;
    Test.Display();

    return 0;
}
