#include <iostream>
#include <ostream>
#include <string>

using namespace std;

class Human
{
    //private can be used only inside the class
private:
    string Name;
    int Age;

public:
    Human(string name, int age)
    {
        Name = name;
        Age = age;
    }

    //these are getters and setters
    //interfaces to use parameters age and name
    //outside of this class
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    int getAge()
    {
        return Age;
    }


    void SayHello()
    {
        cout << "\nHello, my name is " << Name;
        cout << "\nMy age is " << Age;
    }
};

int main()
{
    Human mike = Human("Mike", 27);

    mike.SayHello();

    mike.setName("John");

    mike.SayHello();

    cout << "\nThis person's name is " << mike.getName()
    << ", and his age is " << mike.getAge();

    return 0;
}