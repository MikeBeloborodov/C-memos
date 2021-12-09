#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter a number \n";

    int choice;

    cin >> choice;

    while (choice > 0)
    {
        cout << "\n" << choice;
        choice --;
    }

    return 0;
}