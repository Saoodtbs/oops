#include <iostream>
using namespace std;

    int main()
    {
    	int length, breadth, area, perimeter;

    	cout << "Enter the lenght : ";
    	cin>> length;

    	cout<< "Enter the breadth : ";
    	cin>> breadth;


    	area=(length*breadth);

		perimeter=2*(length+breadth);

        cout<<" The area of the rectangle is : "<< area << endl;

        cout<<" The perimeter of the rectangle is : "<< perimeter << endl;

        cout << endl;

        if (area>perimeter)
        {
            cout<<"Area is greater ";

        }
        else
        {
            cout<<"Perimeter is greater ";
        }
        return 0;
    }
