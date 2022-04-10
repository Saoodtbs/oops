#include <iostream>

using namespace std;
struct points
{
    int p1;
    int p2;
    int p3;
};

int main()

{
    points first, second;

    cout << "Enter the X1 & X2 coordinates\n";
    cin >> first.p1 >> first.p2;

    cout << "Enter the Y1 & Y2 coordinates\n";
    cin >> second.p1 >> second.p2;

    first.p3 = (first.p1 + first.p2);

    second.p3 = (second.p1 + second.p2);

    cout << "The sum of given coordinates are;\n" << first.p3 << endl
         << second.p3;
    return 0;
}
