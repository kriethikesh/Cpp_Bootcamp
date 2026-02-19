#include <iostream>
#include <string>
using namespace std;

int main(){
    string greet; int n;
    getline(cin,greet);
    cin>>n;

    if(greet.length()<n)
        for(int i=0;i<n;i++) cout<<greet;
    else
        cout<<greet;
}