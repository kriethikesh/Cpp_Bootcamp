/*Write a C++ program to design a University Examination Management System where
student academic records are maintained with restricted access. Allow a separate utility
function and an authorized administrative module to view and display confidential
student details that are not accessible to regular member functions.*/
#include <iostream>
using namespace std;
class Uni{
    private:
        string name;
        int roll;
        float mark;
        char grade;
    public:
        Uni(string n,int rno,float m,char g){
            name=n;
            roll=rno;
            mark=m;
            grade=g;
        }
        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Roll no. : "<<roll<<endl;
            cout<<"Mark : "<<mark<<endl;
            cout<<"grade : "<<grade<<endl;
        }
};
int main(){
    Uni s1("kriethikesh",110,98.45,'O');
    Uni s2("sanjay",10,65.8,'B');
    s1.display();
    s2.display();
    return 0;
}