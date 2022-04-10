#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter any year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " its a leap year.";
            else
                cout << year << " its not a leap year.";
        }
        else
            cout << year << " its a leap year.";
    }
    else
        cout << year << " its not a leap year.";

    return 0;
}
