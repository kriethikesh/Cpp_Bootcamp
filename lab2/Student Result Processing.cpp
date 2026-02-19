#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    short students=45; int m[5],total=0; long code=202600123L;
    char sec='A'; const int MAX_MARKS=100,SUBJECTS=5;

    for(int i=0;i<SUBJECTS;i++){ cin>>m[i]; total+=m[i]; }

    double avg=(double)total/SUBJECTS;
    bool pass=avg>=50;

    cout<<fixed<<setprecision(2);
    cout<<"Code:"<<code<<"\nSec:"<<sec<<"\nTotal:"<<total<<"\nAvg:"<<avg
        <<"\nPass:"<<pass;
}