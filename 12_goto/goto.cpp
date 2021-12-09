#include <iostream>

using namespace std;

int main()
{
    cout << "This program will count to 5 and then skip with goto and continue from 6";

    int i = 0; //counter
    while(i <= 10){
        if(i == 5){
            i++;
            goto stop;
        } 
        cout << "\n" << i;
        i++;
        stop:;
    }
}