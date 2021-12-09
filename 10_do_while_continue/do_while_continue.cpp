#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter your number: \n";

    int choice;

    cin >> choice;
    
    do
    {
        if (choice % 2 != 0){
            choice--;
            continue;
        }
        cout << "\n" << choice;
        choice --;
    }while(choice > 0);
}