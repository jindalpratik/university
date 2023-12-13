/*
To create a book class with the properties being
title, author, cost and behaviour being open close read bookmark
*/

#include <iostream>
#include <string>
using namespace std;

class Book
{
    string title;
    string author;
    int cost;
    void open()
    {
        cout << "The book is open" << endl;
    }
    void close()
    {
        cout << "The book is closed" << endl;
    }
    void read()
    {
        cout << "The book is being read" << endl;
    }
    void bookmark()
    {
        cout << "The book is bookmarked" << endl;
    }
};
