#include <iostream>

using namespace std;

//these functions use direct pointers
void ShowNumber(int* numPTR)
{
    cout << "\n" << *numPTR;
}

void ShowLetter(char* charPTR)
{
    cout << "\n" << *charPTR;
}

//now let's use void pointer
//we have to use casting to make change void pointer
void ShowGeneralInfo(void* PTR, char type)
{
    switch(type)
    {
        case 'i':
            cout << "\n" << *((int*)PTR);
            break;
        case 'c':
            cout << "\n" << *((char*)PTR);
            break;
        case 'd':
            cout << "\n" << *((double*)PTR);
            break;
    }
}

int main()
{
    //this is how you reference pointers in functions
    int number = 5;
    char letter = 'A';
    double dub = 15.5;

    ShowNumber(&number);
    ShowLetter(&letter);

    ShowGeneralInfo(&number, 'i');
    ShowGeneralInfo(&dub, 'd');
    ShowGeneralInfo(&letter, 'c');

    return 0;
}