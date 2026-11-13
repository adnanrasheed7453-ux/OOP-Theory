
#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    float price;

public:
    string ISBN;

    // Default Constructor
    Book()
    {
        title = "Unknown";
        author = "Unknown";
        price = 0;
        ISBN = "000";
    }

    // Parameterized Constructor
    Book(string t, string a, float p, string i)
    {
        title = t;
        author = a;
        price = p;
        ISBN = i;
    }

    // Setter Functions
    void setTitle(string t)
    {
        title = t;
    }

    void setAuthor(string a)
    {
        author = a;
    }

    void setPrice(float p)
    {
        price = p;
    }

    // Getter Functions
    string getTitle()
    {
        return title;
    }

    string getAuthor()
    {
        return author;
    }

    float getPrice()
    {
        return price;
    }

    // Apply Discount
    void applyDiscount(float percentage)
    {
        price = price - (price * percentage / 100);
    }

    // Display Book Information
    void displayBook()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: Rs. " << price << endl;
        cout << "ISBN: " << ISBN << endl;
    }
};

int main()
{
    // Three Objects
    Book b1;

    Book b2("OOP", "Ali", 2000, "12345");

    Book b3("C++ Basics", "Ahmed", 1500, "67890");

    // Set values for default object
    b1.setTitle("Programming");
    b1.setAuthor("Adnan");
    b1.setPrice(1000);
    b1.ISBN = "11111";

    // Apply discount
    b2.applyDiscount(10);

    // Display all books
    cout << "Book 1:" << endl;
    b1.displayBook();

    cout << "\nBook 2:" << endl;
    b2.displayBook();

    cout << "\nBook 3:" << endl;
    b3.displayBook();

    return 0;
}

