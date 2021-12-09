#include <iostream>

using namespace std;

// in c++ you have to create prototypes of functions before you use them
void HelloWorld();

int GetProduct(int x, int y);

int main()
{
	cout << "Entering main function.";

	cout << "\nThis is the first function.";
	HelloWorld();
	
	cout << "\nThis is the second function.";
	int result;
	int x;
	int y;

	cout << "\nEnter the first number: ";
	cin >> x;
	cout << "\nEnter the second number: ";
	cin >> y;
	result = GetProduct(x, y);
	cout << "\nThe result of product is " << result;

	return 0;
}

void HelloWorld(){
	cout << "\nHello World!";
}

int GetProduct(int x, int y){
	return x * y;
}


