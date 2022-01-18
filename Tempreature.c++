#include <iostream>
using namespace std;
int main()
{
    int sun=31;
    int pleasant=0,sum=0,hot=0;
    int i,temp,cold=0;
    for ( i = 0; i < sun; i++)
    {
        cout <<"\n";

        cout << "Enter the temperature of days \n" ;
        cin >> temp;

        sum+=temp;

        if (temp>=85)
        {
            cout << "the day is a hot day\n " << temp,++hot;
            

        }
        else if (temp>=60 && temp<=84)
        {
            cout << "the day is a pleasant day\n"<< temp,++pleasant;

        }

        else 


        {
            cout <<"the day is a cold day\n" << temp,++cold;
        }
        cout <<"\n";
       

        cout << "The Total of hot days is\n " << hot;
        cout <<"\n";
        cout << "The Total of plesant days is\n " << pleasant;
        cout <<"\n";
        cout << "The Total of cold days is\n " << cold;

        
        
    }
        
    return 0;
}