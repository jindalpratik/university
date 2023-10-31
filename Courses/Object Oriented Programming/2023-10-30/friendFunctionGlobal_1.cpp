#include <iostream>
using namespace std;

class Product
{
private:
    string name, id;

public:
    Product(string pname, string pid){
        name = pname;
        id = pid;
    }

    friend void friendFunc(Product& pr1);
};

void friendFunc(Product& pr1){
    cout << "Name: " << pr1.name << endl;
    cout << "ID: " << pr1.id << endl;
}

int main()
{
    Product pr1("Laptop", "1234");
    friendFunc(pr1);
    return 0;
}