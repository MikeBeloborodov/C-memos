#include <iostream>

using namespace std;

class Parent
{
//this can be used only in this class
private:

    int Age;

//this can be used by child classes
protected:

    string Name;

//this can be used anywhere
public:
    
    //constructor
    Parent(string name, int age)
    {
        Name = name;
        Age = age;
    }

    //getters and setters
    string GetName()
    {
        return Name;
    }
    int GetAge()
    {
        return Age;
    }

    void GrowUp()
    {
        cout << "\nMy age was " << Age;
        Age++;
        cout << "\nAnd now my age is " << Age;
    }
};

//inheritance is private by default
//you have to explicitly say public to make
//all the methods available in child class
class Child : public Parent
{
private:
    string Degree;

public: 
    //this is how you inherit constructors
    Child(string name, int age, string degree)
        : Parent(name, age)
    {
        Degree = degree;
    }

    string GetDegee()
    {
        return Degree;
    }
};

int main()
{
    Parent Larisa = Parent("Larisa", 50);

    cout << "\nParent's name is " << Larisa.GetName();
    cout << "\nParent's age is " << Larisa.GetAge();
    Larisa.GrowUp();


    Child Misha = Child("Misha", 28, "IT");

    cout << "\nChild's name is " << Misha.GetName();
    cout << "\nChild's age is " << Misha.GetAge();
    Misha.GrowUp();

    return 0;
}