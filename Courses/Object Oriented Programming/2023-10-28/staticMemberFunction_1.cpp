#include <iostream>
using namespace std;

class Topics
{
    static int number;
    string stream = "Geometry";

public:
    static void total_topics()
    {
        cout << "Total topics: " << number << endl;
    }
};
int Topics::number = 7;

int main()
{
    Topics t1;
    t1.total_topics();
    Topics::total_topics();
    return 0;
}