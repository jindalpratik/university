#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;
    float price;
};

int main()
{
    Book b1;
    b1.title = "400 days";
    b1.author = "Chetan Bhagat";
    b1.price = 550;

    cout << "Title: " << b1.title << endl;
    cout << "Author: " << b1.author << endl;
    cout << "Price: " << b1.price << endl;
}