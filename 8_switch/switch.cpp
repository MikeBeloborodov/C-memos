#include <iostream>

using namespace std;

int main()
{
	int choice;
	cout << "Enter a number 1, 2 or 3\n";
	cin >> choice;

	switch(choice)
	{
		case 1:
			cout << "It was 1";
			break;
		case 2: 
			cout << "It was 2";
			break;
		case 3:
			cout << "It was 3";
			break;
		default: 
			cout << "Invalid number";
	}
}
