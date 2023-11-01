/*
Create a class product with two public data members
as product_name and product_id
pass product name and id with the help of
constructor of Product class.
Now create an object called pr1 of Product class
Then create a copy of this object called pr2
now print the values of product_name and product_id
using pr2 object.
*/

#include <iostream>
using namespace std;

class Product
{
public:
    string product_name;
    int product_id;
    Product(string name, int id)
    {
        product_name = name;
        product_id = id;
    }
};

int main()
{
    Product pr1("Laptop", 123);
    Product pr2 = pr1;
    cout << "Product name: " << pr2.product_name << endl;
    cout << "Product id: " << pr2.product_id << endl;
    return 0;
}
