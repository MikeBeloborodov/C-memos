#include <iostream>

using namespace std;

//classes are always before the main function
class Car
{
public:
    string Name;
    int Number;

    Car(string name, int num)
    {
        Name = name;
        Number = num;
    }

    Car()
    {

    }

    void BeepBeep()
    {
        cout << "\nBeep Beep\n";
        cout << "The name of the car is " << Name;
        cout << "\nThe number is " << Number;
    }
};

int main ()
{
    Car newCar;
    newCar.Name = "Subaru";
    newCar.Number = 13;

    newCar.BeepBeep();

    Car newCar2 = Car("Pajero", 75);

    newCar2.BeepBeep();

    return 0;
}

