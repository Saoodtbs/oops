#include <iostream>
#include <string>

using namespace std;
struct number
{
    string areacode;
    string exchange;
    string number;
};

int main()
{
    number first, second;

    second.areacode = "212";
    second.exchange = "767";
    second.number = "9220";

    cout<<"Enter your area code,exchange and number\n";
    cin>>first.areacode>>first.exchange>>first.number;

    cout<<"My Number is\n; "<<"("<<second.areacode<<")"<<second.exchange<<"-"<<second.number<<endl;

    cout<<"Your Number is\n; "<<"("<<first.areacode<<")"<<first.exchange<<"-"<<first.number;

    return 0;

}
