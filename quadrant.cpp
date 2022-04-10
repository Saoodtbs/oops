#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"Enter X-coordinate & Y-coordinate"<<endl;
    cin>>x>>y;

    if(x == 0 && y == 0)
        {cout<<"Point is at ORIGIN"<<endl;}
    else if(x == 0 && (y>0||y<0))
        {cout<<"On Y-Axis"<<endl;}
    else if((x>0||x<0) && y == 0)
        {cout<<"On X-Axis"<<endl;}
    else if(x > 0 && y > 0)
        {cout<<"Point is in Quadrant-I"<<endl;}
    else if(x < 0 && y > 0)
        {cout<<"Point is in Quadrant-II"<<endl;}
    else if(x < 0 && y < 0)
        {cout<<"Point is in Quadrant-III"<<endl;}
    else if(x > 0 && y < 0)
        {cout<<"Point is in Quadrant-IV"<<endl;}
    else
        {cout<<"Enter Valid Coordinated"<<endl;}

    return 0;
}
