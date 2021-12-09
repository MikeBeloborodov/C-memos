#include <iostream>

using namespace std;

void CountToTen();

{
	cout << "This program counts to ten!";

	CountToTen();

	return 0;
}

void CountToTen()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << "\n" << i;
	}
}
