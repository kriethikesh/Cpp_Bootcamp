#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;
    Student(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
    }
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        marks = s.marks;
    }
    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl<<endl;
    }
};

int main() {

    Student s1(1, "Arun", 85);
    cout << "Original Student (s1):" << endl;
    s1.display();
    Student s2(s1);
    cout << "Copied Student (s2):" << endl;
    s2.display();
    return 0;
}