#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char sentence[1000];

    while (n--)
    {
        cin.getline(sentence, 1000);
        cout << sentence << endl;
    }
    return 0;
}