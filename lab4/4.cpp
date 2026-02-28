#include <iostream>
using namespace std;
class BankAccount {
public:
    int accNo;
    string name;
    double balance;
    BankAccount(int a, string n, double b) {
        accNo = a;
        name = n;
        balance = b;
        cout << "Account Created for " << name << endl;
    }
    BankAccount(const BankAccount &b) {
        accNo = b.accNo;
        name = b.name;
        balance = b.balance;
        cout << "Account Copied for " << name << endl;
    }
    ~BankAccount() {
        cout << "Account Destroyed for " << name << endl;
    }

    void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Name      : " << name << endl;
        cout << "Balance   : " << balance << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    BankAccount acc1(1001, "Arun", 5000);
    cout << "\nOriginal Account Details:\n";
    acc1.display();
    BankAccount acc2 = acc1;
    cout << "\nCopied Account Details:\n";
    acc2.display();
    cout << "\nEnd of Program...\n";
    return 0;
}