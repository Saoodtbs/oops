#include <iostream>
#include <math.h>
using namespace std;

double calculateStandardDeviation(int sum, double avg, int n){
    double meanD = sqrt((sum / n) - (pow(avg, 2)));
    return meanD;
}

int main(){
    int N, largestofall, smallestofall, sum = 0, sumofsqrs = 0, range;
    double average, standardDeviation;
    cin>>N;

    int collection[N];

    for(int i = 0; i < N; i++)
        cin>>collection[i];

    largestofall = collection[0];
    smallestofall = collection[0];

    for(int i = 0 ; i < N; i++){
        sum += collection[i];
        sumofsqrs += pow(collection[i], 2);

        if(smallestofall > collection[i])
            smallestofall = collection[i];

        if(largestofall < collection[i])
            largestofall = collection[i];
    }

    average = static_cast <double> (sum) / N;
    range = largestofall - smallestofall;
    standardDeviation = calculateStandardDeviation(sumofsqrs, average, N);

   cout<<"Smallest of Collection: "<<smallestofall<<endl;

   cout<<"Largest of Collection: "<<largestofall<<endl;

   cout<<"Average of Collection: "<<average<<endl;

   cout<<"Range of Collection: "<<range<<endl;

   cout<<"Standard Deviation of Collection: "<<standardDeviation<<endl;
}
