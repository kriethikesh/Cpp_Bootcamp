#include <iostream>
using namespace std;

int main(){
    const double WEIGHT_THEORY=0.7;

    while(true){
        int m[5],sports,total=0,i=0;
        while(i<5) cin>>m[i++];

        cin>>sports;

        for(i=0;i<5;i++) total+=m[i];

        double avg=total/5.0;
        bool pass=(m[0]>35&&m[1]>35&&m[2]>35&&m[3]>35&&m[4]>35);
        string rank=(avg>90)?"A1":"A2";
        bool schol=(avg>85||sports>80);

        cout<<avg<<" "<<pass<<" "<<rank<<" "<<schol<<"\n";
        break;
    }
}