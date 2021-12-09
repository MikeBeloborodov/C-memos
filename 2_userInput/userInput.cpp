#include <iostream>

using namespace std;

int main()
{
	int rubles, dollars;
	
	//let's get user input and transform it
	cout << "Enter the amount of dollars that you have: ";
	cin >> dollars;

	rubles = dollars * 60;
	
	// you can chain more input with <<
	cout << "\nYour amout of rubles is " << rubles << "RUB";

	return 0;
}

