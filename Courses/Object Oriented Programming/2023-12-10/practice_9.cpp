#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);

    for(int i: l)
        cout << i << endl;
}