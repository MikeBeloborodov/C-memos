#include <iostream>

using namespace std;

//this is how you create abstract class (interface)
class IFood
{
    virtual void getFood() = 0;
};

//now we have to implement it here or program won't work
class Human : IFood
{
private:
    string Name;
    int Age;

public:
    Human(string name, int age)
    {
        Name = name;
        Age = age;
    }

    void getFood()
    {
        cout << "\nFeeding " << Name << "...";
    }

    void getHello()
    {
        cout << "\nHello, my name is " << Name;
        cout << "\nMy age is  " << Age;
    }
};

int main()
{
    Human mike = Human("Mike", 28);

    mike.getHello();
    mike.getFood();

    return 0;
}