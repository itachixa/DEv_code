#include <iostream>
using namespace std;


class BankAccount {
protected:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double bal) : accountNumber(accNum), balance(bal) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << " | New Balance: $" << balance << endl;
    }

    virtual void withdraw(double amount) = 0; 

    void displayBalance() const {
        cout << "Account Number: " << accountNumber << " | Balance: $" << balance << endl;
    }

    double getBalance() const { return balance; }
};

// Derived class: SavingsAccount
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string accNum, double bal, double rate)
        : BankAccount(accNum, bal), interestRate(rate) {}

    void applyInterest() {
        double interest = balance * (interestRate / 100);
        balance += interest;
        cout << "Interest Applied: $" << interest << " | New Balance: $" << balance << endl;
    }

    void withdraw(double amount) override {
        if (amount > balance) {
            cout << "Insufficient balance! Withdrawal failed." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: $" << amount << " | New Balance: $" << balance << endl;
        }
    }
};


class CurrentAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CurrentAccount(string accNum, double bal, double limit)
        : BankAccount(accNum, bal), overdraftLimit(limit) {}

    void withdraw(double amount) override {
        if (amount > balance + overdraftLimit) {
            cout << "Overdraft limit exceeded! Withdrawal failed." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: $" << amount << " | New Balance: $" << balance << endl;
        }
    }
};

// Main Function
int main() {
    cout << "🔹 Banking System Simulation 🔹" << endl;

    // Creating a Savings Account
    SavingsAccount savings("SA12345", 1000.0, 5.0);
    savings.deposit(500);
    savings.applyInterest();
    savings.withdraw(200);
    savings.displayBalance();

    cout << "------------------------------------------" << endl;

    // Creating a Current Account
    CurrentAccount current("CA67890", 500.0, 300.0);
    current.deposit(200);
    current.withdraw(900);
    current.withdraw(200);
    current.displayBalance();

    return 0;
}
