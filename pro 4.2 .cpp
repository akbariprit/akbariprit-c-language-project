#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accNo;
    string name;
    double bal;
public:
    BankAccount(int a, string n, double b) : accNo(a), name(n), bal(b) {}
    void deposit(double amt) { if (amt > 0) bal += amt; }
    void withdraw(double amt) { if (amt > 0 && amt <= bal) bal -= amt; }
    double getBalance() { return bal; }
    void display() {
        cout << "Acc No: " << accNo << "\nName: " << name << "\nBal: " << bal << endl;
    }
};

class SavingsAccount : public BankAccount {
    double rate;
public:
    SavingsAccount(int a, string n, double b, double r) : BankAccount(a, n, b), rate(r) {}
    double calculateInterest() { return bal * rate / 100; }
    void display() {
        BankAccount::display();
        cout << "Interest Rate: " << rate << "\nInterest: " << calculateInterest() << endl;
    }
};

int main() {
    SavingsAccount s(101, "Prit", 1000, 5);
    s.deposit(500);
    s.withdraw(200);
    s.display();
    return 0;
}

