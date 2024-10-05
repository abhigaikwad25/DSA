#include <iostream>
using namespace std;

void switchcase(int num)
{
    switch (num)
    {
    case 1:
        cout << "ONE";
        break;
    case 2:
        cout << "TWO";
        break;
    case 3:
        cout << "THREE";
        break;
    case 4:
        cout << "FOUR";
        break;
    case 5:
        cout << "FIVE";
        break;
    default:
        cout << "Number doesnt match";
    }
}

int main()
{
    int num;
    cout << "Enter number from 1to5 : ";
    cin >> num;
    switchcase(num);
}