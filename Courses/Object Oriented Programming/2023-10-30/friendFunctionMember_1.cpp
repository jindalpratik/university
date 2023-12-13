#include <iostream>
using namespace std;

class Product;
class Category
{
public:
    void friendFunc(Product &pr1);
};

class Product
{
private:
    string name, id;

public:
    Product(string pname, string pid)
    {
        name = pname;
        id = pid;
    }
    friend void Category::friendFunc(Product &pr1);
};

void Category::friendFunc(Product &pr1)
{
    cout << "Name: " << pr1.name << endl;
    cout << "ID: " << pr1.id << endl;
}

int main()
{
    Product pr1("Laptop", "1234");
    Category cat1;
    cat1.friendFunc(pr1);
    return 0;
}