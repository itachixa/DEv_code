#include <iostream>
using namespace std;

class BankAccount_584 {
protected:
    string accountNumber_584;
    double balance_584;

public:
    BankAccount_584(string accNum_584, double bal_584) : accountNumber_584(accNum_584), balance_584(bal_584) {}

    void deposit_584(double amount_584) {
        balance_584 += amount_584;
        cout << "Deposited: $" << amount_584 << " | New Balance: $" << balance_584 << endl;
    }

    virtual void withdraw_584(double amount_584) = 0;

    void displayBalance_584() const {
        cout << "Account Number: " << accountNumber_584 << " | Balance: $" << balance_584 << endl;
    }

    double getBalance_584() const { return balance_584; }
};


class SavingsAccount_584 : public BankAccount_584 {
private:
    double interestRate_584;

public:
    SavingsAccount_584(string accNum_584, double bal_584, double rate_584)
        : BankAccount_584(accNum_584, bal_584), interestRate_584(rate_584) {}

    void applyInterest_584() {
        double interest_584 = balance_584 * (interestRate_584 / 100);
        balance_584 += interest_584;
        cout << "Interest Applied: $" << interest_584 << " | New Balance: $" << balance_584 << endl;
    }

    void withdraw_584(double amount_584) override {
        if (amount_584 > balance_584) {
            cout << "Insufficient balance! Withdrawal failed." << endl;
        } else {
            balance_584 -= amount_584;
            cout << "Withdrawn: $" << amount_584 << " | New Balance: $" << balance_584 << endl;
        }
    }
};

class CurrentAccount_584 : public BankAccount_584 {
private:
    double overdraftLimit_584;

public:
    CurrentAccount_584(string accNum_584, double bal_584, double limit_584)
        : BankAccount_584(accNum_584, bal_584), overdraftLimit_584(limit_584) {}

    void withdraw_584(double amount_584) override {
        if (amount_584 > balance_584 + overdraftLimit_584) {
            cout << "Overdraft limit exceeded! Withdrawal failed." << endl;
        } else {
            balance_584 -= amount_584;
            cout << "Withdrawn: $" << amount_584 << " | New Balance: $" << balance_584 << endl;
        }
    }
};

int main() {
   
    SavingsAccount_584 savings_584("SA12345", 1000.0, 5.0);
    savings_584.deposit_584(500);
    savings_584.applyInterest_584();
    savings_584.withdraw_584(200);
    savings_584.displayBalance_584();
    return 0;
}
