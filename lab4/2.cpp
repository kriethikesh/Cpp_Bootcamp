/*  Develop a C++ program to simulate an online shopping cart using classes and objects.
    Implement member functions to add products, calculate total cost, and display cart
    items.
*/
#include <iostream>
using namespace std;
class Shop{
    public:
        int qty;
        float price;
        string item_name;
        Shop(int q,float p,string n){
            qty=q;
            price=p;
            item_name=n;
        }
        void display(){
            cout<<"Item_name = "<<item_name<<endl;
            cout<<"Total_Price = "<<qty*price<<endl<<endl;
        }
};
int main(){
    Shop s1(100,230.4,"Onion");
    Shop s2(50,50.5,"Tomoto");
    Shop s3(10,6.5,"Egg");
    s1.display();
    s2.display();
    s3.display();
    return 0;
}