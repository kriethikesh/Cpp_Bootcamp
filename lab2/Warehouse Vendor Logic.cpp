#include <iostream>
using namespace std;

int main(){
    const double URGENT_THRESHOLD=20;
    int sales[7],stock=200,total=0; 

    do{
        for(int i=0;i<7;i++){ cin>>sales[i]; total+=sales[i]; }

        stock-=total;
        if(stock<50){
            int urgency=(stock<URGENT_THRESHOLD)?1:2;
            switch(urgency){
                case 1: cout<<"Vendor1 Fast\n"; break;
                case 2: cout<<"Vendor2 Cheap\n";
            }
        }
    }while(stock>0);

    cout<<"Stock:"<<stock;
}