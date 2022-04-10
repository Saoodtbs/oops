#include <iostream>

using namespace std;
float r;
int main()
{
cout<<"Enter the Richter Scale of the earthquake ;\n";
cin>>r;
if (r<5.0)
{
    cout<<"Litte to no damage \n";
}
else if (r>=5.0 && r<5.5)
{
    cout<<"Some damage \n";
}
else if (r>=5.5 && r<6.5)
{
    cout<<"Serious damage\n";
}
else if (r>=6.5 && r<7.5)
{
    cout<<"Disaster\n";
}
else if (r>=7.5)
{
    cout<<"END OF THE WORLD\n";
}




    return 0;
}
/* we cant use switch statements for programs like these because the data type
used here is float
switch statements uses constants to check the conditons */
