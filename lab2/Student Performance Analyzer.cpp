#include <iostream>
using namespace std;

int main(){
    const int MIN_ATTENDANCE=75;
    int n=0;

    while(cin>>n){
        int m,total=0,att;
        for(int i=0;i<n;i++){ cin>>m; total+=m; }
        cin>>att;

        int avg=total/n;
        char g=(avg>=90)?'A':(avg>=80)?'B':(avg>=70)?'C':'D';
        bool promo=(avg>50 && att>MIN_ATTENDANCE);

        cout<<g<<" "<<promo<<"\n";
    }
}