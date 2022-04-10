#include <iostream>

using namespace std;
class areaofrect
{
private:
    int lenght;
    int breadth;

public:
    void getcals()
    {
        cout << "Enter the breadth and lenght\n";
        cin >> breadth >> lenght;
    }
    int area()
    {
        return (lenght * breadth);
    }
};

int main()
{
    areaofrect r;
    r.getcals();
    int result = r.area();
    cout << "The area of the given rectangle is\n"
         << result;
    return 0;
}
