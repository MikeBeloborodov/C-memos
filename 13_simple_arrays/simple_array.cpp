#include <iostream>

using namespace std;

void DisplayArray(int arr[], int length);

int main()
{
    int length;

    cout << "Please enter the length of the array: ";

    cin >> length;

    if ((length <= 0) || (length >= 'a' && length <= 'z')){
        while(length <= 0){
            cout << "Invalid number, it shoud be more than 0\n";
            cout << "Please enter new number: ";
            cin >> length;
        }
    }

    int arr[length];

    DisplayArray(arr, length);
}

void DisplayArray(int arr[], int length)
{
    for (int i = 0; i < length; i++){
        arr[i] = i;
    }

    for (int i = 0; i < length; i++){
        cout << "\n" << arr[i];
    }
}