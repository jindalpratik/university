
#include <iostream>
class MyClass
{
public:
    static int count;
    MyClass()
    {
        count++;
    }
};
int MyClass::count = 0;
int main()
{
    MyClass obj1, obj2, obj3;
    std::cout << MyClass::count << std::endl;
    return 0;
}
