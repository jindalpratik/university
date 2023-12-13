#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;
    float price;

    void show()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b1;
    b1.title = "400 days";
    b1.author = "Chetan Bhagat";
    b1.price = 550;

    b1.show();
}