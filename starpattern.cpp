#include <iostream>
using namespace std;

int main()
{
    int r=20;


    for(int i = 1; i <= r; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << " X ";
        }
        cout << "\n";
    }
    return 0;
}
