#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double cash=50000,price,val=0;
    int sh; char type;
    const double COMMISSION=0.02;

    for(int i=0;i<3;i++){
        cin>>type>>sh>>price;
        double cost=sh*price*(1+COMMISSION);

        if(type=='B'){ cash-=cost; val+=sh*price; }
        else{ cash+=sh*price*(1-COMMISSION); val-=sh*price; }
    }

    double total=cash+val;
    cout<<fixed<<setprecision(2)<<"Portfolio:"<<total;
}