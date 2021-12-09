#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number and program will count +50 from this number and stop: \n";

    int choice;

    cin >> choice;

    int result = choice + 50;
    
    while(true){
        if (choice > result){
            break;
        }
        cout << "\n" << choice;
        choice++;
    }
}
