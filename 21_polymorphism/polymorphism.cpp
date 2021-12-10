#include <iostream>

using namespace std;

class Grandparent
{
private:

    int Age;

public:

    string Name;

    Grandparent(int age, string name)
    {
        Age = age;
        Name = name;
    }

    string GetName()
    {
        return Name;
    }
    void SetName(string name)
    {
        Name = name;
    }
    int GetAge()
    {
        return Age;
    }
    //virtual means that every child that inherits
    //from this class can change this method
    //and this pointer from this class will point
    //at changed method
    virtual void Work()
    {   
        cout << "\n" << Name;
        cout << "\nI am working, it's a basic work task...";
    }
};

class Parent : public Grandparent 
{
private:

    string Degree;

public:

    Parent(string name, int age, string degree)
        : Grandparent(age, name)
        {
            Degree = degree;
        }

    void Work()
    {
        cout << "\n" << Name;
        cout << "\nI am working in " << Degree << " field.";
    }

};

class Child : public Parent
{
public:

    string Subculture;

    Child(int age, string name, string degree, string subculture)
        : Parent(name, age, degree)
        {
            Subculture = subculture;
        }
};

int main()
{
    Grandparent obj1 = Grandparent(87, "Matilda");

    Parent obj2 = Parent("Jack", 45, "IT");

    Child obj3 = Child(28, "Mike", "IT", "Rock");

    obj1.Work();
    obj2.Work();
    obj3.Work();

    //if we remove virtual from work method
    //all these invocatuions of Work() will
    //return "This is a basic work task..."
    //but with virtual
    //all these pointers will return
    //methods that were changed
    Grandparent *p1 = &obj1;
    Grandparent *p2 = &obj2;
    Grandparent *p3 = &obj3;

    p1->Work();
    p2->Work();
    p3->Work();


    return 0;
}