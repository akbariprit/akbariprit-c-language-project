#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accNo;
    string name;
    double bal;
public:
    BankAccount(int a, string n, double b) : accNo(a), name(n), bal(b) {}
    void deposit(double a) { if (a > 0) bal += a; }
    double getBalance() { return bal; }
    void display() { cout << "Acc: " << accNo << "\nName: " << name << "\nBal: " << bal << endl; }
};

class CheckingAccount : public BankAccount {
    double overdraft;
public:
    CheckingAccount(int a, string n, double b, double o) : BankAccount(a, n, b), overdraft(o) {}
    bool checkOverdraft(double a) { return (bal - a) >= -overdraft; }
    void withdraw(double a) {
        if (checkOverdraft(a)) bal -= a;
        else cout << "Overdraft limit exceeded!\n";
    }
    void display() {
        BankAccount::display();
        cout << "Overdraft: " << overdraft << endl;
    }
};

int main() {
    CheckingAccount c(201, "Prit", 500, 1000);
    c.withdraw(1300);
    c.display();
    return 0;
}
