#include <iostream>

using namespace std;

int main()
{
    //this is a real balance
    int balance;
    //this is a pointer to balance
    int *balance_pointer;
    //this is the value of balance
    int value;

    balance = 3200;
    //we are pointing at the memory adress of balance with &
    balance_pointer = &balance;

    //now we are retrieving the value from this adress
    //with this pointer
    value = *balance_pointer;

    cout << "Balance is " << value;

    return 0;
}