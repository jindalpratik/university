#include <iostream>
class MyClass
{
public:
    MyClass()
    {
        std::cout << "Constructor called" << std::endl;
    }
    ~MyClass()
    {
        std::cout << "Destructor called" << std::endl;
    }
};
int main()
{
    MyClass obj1;
    {
        MyClass obj2;
    }
    MyClass obj3;
    return 0;
}
