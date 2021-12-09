#include <iostream>

using namespace std;

int main()
{
	int rubles, dollars;
	
	//let's get user input and transform it
	cout << "Enter the amount of dollars that you have: ";
	cin >> dollars;

	rubles = dollars * 60;

	cout << "\nYour amout of rubles is ";
	cout << rubles;
	cout << "RUB";

	return 0;
}

