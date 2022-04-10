#include <iostream>
using namespace std;
int main()
{
    int sun=30;
    int hot=0,pleasant=0,cold=0,sum=0;
    int i,tempt;
    float average;
    for ( i = 0; i < sun; i++)
    {
        cout <<"\n";
        cout << "Enter the tempterature\n" ;
        cin >> tempt;
        sum+=tempt;

        if (tempt>=85)
        {
            cout << "It is a hotday\n " << tempt,++hot;


        }
        else if (tempt>=60 && tempt<=84)
        {
            cout << "It is a pleasantday\n"<< tempt,++pleasant;

        }
        else
        {
            cout <<"It is a coldday\n" << tempt,++cold;
        }
        cout <<"\n";
        average = (float)sum /30 ;


        cout << "The collection of hotdays is\n " << hot;
        cout <<"\n";

        cout << "The collection of plesantdays is\n " << pleasant;
        cout <<"\n";

        cout << "The collection of colddays is\n " << cold;
        cout <<"\n";

        cout << "The average tempreature is\n " << average;






    }

    return 0;
}
