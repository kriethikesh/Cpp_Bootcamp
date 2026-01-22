#include <iostream>
using namespace std;
int main()
{
    int row,i,j,c=0;
    cout<<"Enter the row : ";
    cin>>row;
    for(i=0;i<=row;i++){
        for(j=c;j<=row+c;j++)
            cout<<j<<" ";
        cout<<"\n";
        c++;
    }

    return 0;
}