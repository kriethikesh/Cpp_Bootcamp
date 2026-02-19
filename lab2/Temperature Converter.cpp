#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double t; char u;
    const double C_TO_F=9.0/5.0+32, C_TO_K=273.15;

    cin>>t>>u;

    double c,f,k;
    if(u=='C'){ c=t; f=t*9/5+32; k=t+C_TO_K; }
    else if(u=='F'){ c=(t-32)*5/9; f=t; k=c+C_TO_K; }
    else{ c=t-C_TO_K; f=c*9/5+32; k=t; }

    cout<<fixed<<setprecision(2)<<c<<" "<<f<<" "<<k;
}