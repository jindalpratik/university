#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string fuel = "Petrol";
};

class Car : public Vehicle
{
public:
    int wheels = 4;
    void vehicleItems()
    {
        cout << "Fuel of car:" << fuel << endl;
    }
};

int main()
{
    Car car;
    car.vehicleItems();
}