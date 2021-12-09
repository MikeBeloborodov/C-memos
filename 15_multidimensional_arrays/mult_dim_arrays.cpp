#include <iostream>

using namespace std;

void DisplayTwoDArray(int arr[][10]);

void DisplayThreeDArray(int arr[][10][10]);

int main()
{
    int three_d_arr[10][10][10];
    int two_d_arr[10][10];

    for (int i = 0; i < 10; i ++){
        for (int j = 0; j < 10; j++){
            two_d_arr[i][j] = i * j;
        }
    }

    int counter = 0;
    for (int i = 0; i < 10; i ++){
        for (int j = 0; j < 10; j++){
            for (int k = 0; k < 10; k++){
            three_d_arr[i][j][k] = counter;
            counter++;
            }
        }
    }

    DisplayTwoDArray(two_d_arr);

    DisplayThreeDArray(three_d_arr);

    cout << "The end";
    cin >> counter;

    return 0;
}

void DisplayThreeDArray(int arr[][10][10])
{
for (int i = 0; i < 10; i ++){
        for (int j = 0; j < 10; j++){
            for (int k = 0; k < 10; k++){
                cout << "\n" << arr[i][j][k];
            }
        }
    }
}

void DisplayTwoDArray(int arr[][10])
{
    for (int i = 0; i < 10; i ++){
        for (int j = 0; j < 10; j++){
            cout << "\n" << arr[i][j];
        }
    }
}