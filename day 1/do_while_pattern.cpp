#include <iostream>
using namespace std;
int main(){
    int row,c,s=0;
    cout<<"Enter the no. of Rows : ";
    cin>>row;
    c=row;
    do{
        for(int i=c;i>=1;i--){
            cout<<i<<" ";
        }
        for(int j=s;j>=1;j--){
            cout<<"  ";
        }
        s++;
        c--;
        cout<<endl;
    }while(row--);
    return 0;
}