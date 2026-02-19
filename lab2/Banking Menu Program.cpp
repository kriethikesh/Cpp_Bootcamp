#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double bal=10000.0,amt,h[5]; int ch,i=0;

    do{
        cin>>ch;
        switch(ch){
            case 1: cin>>amt; bal+=amt; h[i++]=amt; break;
            case 2: cin>>amt; if(amt<=bal){ bal-=amt; h[i++]=-amt; } break;
            case 3: cout<<bal<<"\n"; break;
        }
    }while(ch!=4 && i<5);

    cout<<fixed<<setprecision(2)<<"Final Balance:"<<bal<<"\nHistory:";
    for(int j=0;j<i;j++) cout<<h[j]<<" ";
}