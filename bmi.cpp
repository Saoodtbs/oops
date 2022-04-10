#include <iostream>

using namespace std;

int main()
{
float weight;
float height;
float bmi;

cout<<"Enter your weight in lbs and height in inches\n";
cin>>weight>>height;

bmi=(703*weight)/(height*height);

cout<<"Your BMI is\n"<<bmi<<endl;

if (bmi>25)
{
    cout<<"You are over weight!!\n";
}
else if (bmi<25 && bmi>18.5)
{
    cout<<"Your weight is optimal!\n";
}
else
{
    cout<<"You are underweight!\n";
}

    return 0;
}
