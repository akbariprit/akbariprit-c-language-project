#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNo, string name, double bal = 0.0) {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) balance -= amount;
    }

    double getBalance() { return balance; }

    void displayAccountInfo() {
        cout << "Acc No: " << accountNumber
             << "\nName: " << accountHolderName
             << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(101, "Prit", 1000);
    acc.deposit(500);
    acc.withdraw(300);
    acc.displayAccountInfo();
    return 0;
}

