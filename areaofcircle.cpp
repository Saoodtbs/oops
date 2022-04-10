#include <iostream>

using namespace std;
class areaofcircle
{
private:
    float radi;
    float area;
    float pi = 3.14;

public:
    void getarea()
    {
        cout << "Enter the radius of the Circle\n";
        cin >> radi;
    }
    int areaofc()
    {
        return (area = radi * radi * pi);
    }
    void printarea()
    {
        cout << "The area of circle is \n"
             << area;
    }
};
int main()
{
    areaofcircle f;
    f.getarea();
    f.areaofc();
    f.printarea();
}
