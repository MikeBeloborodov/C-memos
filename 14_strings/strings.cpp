#include <iostream>
#include "stdio.h"

using namespace std;

int main()
{
    char str[5];

    cout << "Enter your string: \n";
    //function to get a string of length 5
    //if we type more than that it will only display 4 symbols
    cin.getline(str, 5);

    cout << "\n Your line is: \n" << str;
}