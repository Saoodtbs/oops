#include <iostream>
using namespace std;
int main()
{
    int arr[50], n, i, lagestofcollection, smallestofcollection;
    float averageofcollection,sum;
    cout << "Enter the collection of numbers : ";
    cin >> n;

      for (i = 0; i < n; i++)
        cin >> arr[i];

      lagestofcollection = arr[0];
      for (i = 0; i < n; i++)
    {
        if (lagestofcollection < arr[i])
            lagestofcollection = arr[i];
    }

      smallestofcollection = arr[0];
      for (i = 0; i < n; i++)
    {
        if (smallestofcollection > arr[i])
            smallestofcollection = arr[i];
    }

      for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    averageofcollection = (float)sum / n;

    cout << "The largest number is : \n"
         << lagestofcollection;
    cout << "\n";

    cout << "The smallest number is : \n"
         << smallestofcollection;
    cout << "\n";

    cout << "averageofcollection is ; \n " << averageofcollection;
    return 0;
}
