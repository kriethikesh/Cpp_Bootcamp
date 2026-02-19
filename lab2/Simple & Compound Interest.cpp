#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double p,r,t; int y;
    const double SIMPLE_RATE=0.07, COMPOUND_RATE=0.08;

    cin>>p>>y;
    double si=p*SIMPLE_RATE*y;
    double ci=p*(pow(1+COMPOUND_RATE,y)-1);

    cout<<fixed<<setprecision(2);
    cout<<"Simple:"<<si<<"\nCompound:"<<ci;
}