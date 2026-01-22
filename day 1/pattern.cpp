#include <iostream>
using namespace std;

int main() {
    int a=0,b=10,c=20;
    for(int i=0;i<4;i++){
        
            cout<<a<<" "<<b<<" "<<c<<endl;
            a+=19-i;
            b+=1;
            c-=1;
    }
    return 0;
}