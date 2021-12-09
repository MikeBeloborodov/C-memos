#include <iostream>

using namespace std;

void CountOddNums();

int main()
{
	CountOddNums();

	return 0;
}

void CountOddNums()
{
	for (int i = 1; i <= 20; i++){
		if (i % 2 != 0){
			cout << i << "\n";
		}
	}
}

