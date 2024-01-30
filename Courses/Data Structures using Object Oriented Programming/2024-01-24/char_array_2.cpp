#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char sentence[100];
    char temp;
    int len = 0;
    while (temp != '\n')
    {
        temp = cin.get();
        sentence[len++] = temp;
    }
    cout << sentence;
    return 0;
}
