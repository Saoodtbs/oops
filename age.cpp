#include <iostream>
using namespace std;

int main()
{

    int a, b, c;

    cout << "Enter the age of Ram, Sham & Ajay \n";


    cin >> a >> b >> c;



    if (a < b && a < c)
    {
        cout << "Ram is the youngest " ;


    }
    else if (b < a && b < c)
    {
        cout << "Sham is the youngest ";
    }
    else
    {
        cout << "Ajay is the youngest" ;
    }

    return 0;
}
