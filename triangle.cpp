#include<iostream>
using namespace std;
int main()
{
int x;
int y;
int z;

cout<<"Enter 3 angles of the triangle"<<endl;
cin>>x>>y>>z;

int sum=x+y+z;

    if(sum==180 && x!=0 && y!=0 && z!=0)
     {
       cout<<"triangle is valid"<<endl;
  }

else
{
      cout<<"triangle is not valid"<<endl;
}

}
