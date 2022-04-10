#include <iostream>
using namespace std;

int main()
{
    int cp, sp, profit, loss;

    cout << "Enter the cost price: ";
    cin >> cp;
    cout << "Enter the selling price: ";
    cin >> sp;

    if (sp > cp)
    {
        profit = sp - cp;
        cout << "The profit is : " << profit;
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        cout << "The loss is : " << loss;
    }
    else
    {
        cout << "No profit no loss " << endl;
    }
    return 0;
}
