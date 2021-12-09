#include <iostream>

using namespace std;

int main()
{
	double rubles, dollars;

	cout << "Enter the amout of rubles that you have: ";
	cin >> rubles;

	dollars = rubles / 60;

	cout << "With this amount of rubles, you have " << dollars << "$";

	return 0;
}

