#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter any number:";
    cin >> i;

    if (i > 0)
        cout << "The absolute value of is:" << i;
    else
        cout << "The absolute value of is:" << -(i);

    return 0;
}
