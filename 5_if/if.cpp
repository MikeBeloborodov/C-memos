#include <iostream>

using namespace std;

void CheckWhatIsLarger(int x, int y);

int main()
{
	int x;
	int y;

	cout << "Enter the first number: ";
	cin >> x;

	cout << "\nEnter the second umber: ";
	cin >> y;

	CheckWhatIsLarger(x, y);

	return 0;
}

void CheckWhatIsLarger(int x, int y)
{
	if (x > y) 
	{
		cout << x << " is larger";
	}
	else if (y > x)
	{
		cout << y << " is larger";
	}
	else
	{
		cout << "They are equal";
	}
}
