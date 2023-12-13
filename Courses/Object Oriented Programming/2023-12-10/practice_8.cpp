#include <iostream>
using namespace std;

void myHandler()
{
    try{
        throw "Exception";
    }
    catch(const char* ){
        cout << "Caught exception inside myHandler "<< endl;
        throw;
    }

}

int main()
{
    cout << "Main function" << endl;
    try{
        myHandler();
    }
    catch(const char* ){
        cout << " mkn"<< endl;
    }

}