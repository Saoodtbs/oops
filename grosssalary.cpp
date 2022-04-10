#include <iostream>

using namespace std;
class salary
{
private:
int bs;
int hra;
int da;
int gs;
public:
void getdetails()
{
    cout<<"Enter your basic salary\n";
    cin>>bs;
}
    int calgross()
    {
        return(hra=bs/100*20,da=bs/100*10,gs=bs+da+hra);
    }
};
int main()
{
salary p;
p.getdetails();
int ts = p.calgross();
cout<<"Your gross salary is\n"<<ts;
return 0 ;

}
