/*  Write a C++ program to create a library catalog system using classes and objects.
    Implement member functions to display book information and manage the catalog.  */
#include<iostream>
using namespace std;
class Library{
    public:
        int bno;
        string bname;
        Library(int no,string name){
            bno=no;
            bname=name;
        }
        void display(){
            cout<<"Book_no = "<<bno<<endl;
            cout<<"Book_name = "<<bname<<endl<<endl;
        }
};
int main(){
    Library b1(110,"Hello C");
    Library b2(111,"Hello python");
    Library b3(112,"Hello Cpp");
    b1.display();
    b2.display();
    b3.display();
    return 0;
}