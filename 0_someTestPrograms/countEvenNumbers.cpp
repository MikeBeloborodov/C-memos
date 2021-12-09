#include <iostream>

using namespace std;

void CountEvenNums();

int main()
{
	CountEvenNums();

	return 0;
}

void CountEvenNums()
{
	for (int i = 1; i <= 20; i++){
		if (i % 2 == 0){
			cout << i << "\n";
		}
	}
}

