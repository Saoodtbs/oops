#include <iostream>
using namespace std;
int main()
{
    int arr[100], n, i, max, min;
    float average,sum;
    cout << "Enter the number of values : ";
    cin >> n;
    cout << "Please Enter the number : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    average = (float)sum / n;

    cout << "The largest of the numbers is : \n"
         << max;
    cout << "\n";
    cout << "The smallest of the numbers is  : \n"
         << min;
    cout << "\n";

    cout << "Average ; \n " << average;
    return 0;
}