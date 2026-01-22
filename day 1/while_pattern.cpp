#include <iostream>
using namespace std;
int main(){
    int row,c=0;
    cout<<"Enter the No. of Rows : ";
    cin>>row;
    while(row>0){
        c++;
        for(int i=row-1;i>0;i--){
            cout<<"  ";
        }
        for(int j=c;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
        row--;
    }
    return 0;
}