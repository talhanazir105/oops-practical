#include <iostream>
#include <string>
using namespace std;

// Class 1: Book
class Book
{
private:
    int bookID;
    string bookName;
    float price;

public:
    // Function to input book attributes
    void inputBook()
    {
        cout << "  Enter Book ID: ";
        cin >> bookID;

        // cin.ignore() is needed to clear the input buffer before reading a string
        cin.ignore();

        cout << "  Enter Book Name: ";
        getline(cin, bookName);

        cout << "  Enter Price: ";
        cin >> price;
    }

    // Function to show book attributes
    void showBook()
    {
        cout << "  ID: " << bookID << " | Name: " << bookName << " | Price: " << price << endl;
    }
};

// Class 2: Writer
class Writer
{
private:
    string writerName;
    string address;
    int numBooksWritten;
    // Requirement: Array of Book objects with length 5
    Book books[5];

public:
    // Function to input writer attributes and their 5 books
    void inputWriter()
    {
        cout << "--- Enter Writer Details ---" << endl;
        cout << "Enter Writer Name: ";
        getline(cin, writerName);

        cout << "Enter Address: ";
        getline(cin, address);

        cout << "Enter Number of Books Written (total count): ";
        cin >> numBooksWritten;

        cout << "\n--- Enter Details for 5 Books ---" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Book " << (i + 1) << ":" << endl;
            // Calling the input function of the Book class
            books[i].inputBook();
            cout << endl;
        }
    }

    // Function to display writer attributes and their 5 books
    void displayWriter()
    {
        cout << "\n===================================" << endl;
        cout << "        WRITER INFORMATION         " << endl;
        cout << "===================================" << endl;
        cout << "Writer Name: " << writerName << endl;
        cout << "Address: " << address << endl;
        cout << "Total Books Written: " << numBooksWritten << endl;

        cout << "\n--- List of 5 Books Stored ---" << endl;
        for (int i = 0; i < 5; i++)
        {
            // Calling the show function of the Book class
            books[i].showBook();
        }
        cout << "===================================" << endl;
    }
};

int main()
{
    Writer myWriter;

    // Input data
    myWriter.inputWriter();

    // Display data
    myWriter.displayWriter();

    return 0;
}