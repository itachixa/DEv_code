#include <iostream>
using namespace std;

class Loan; // Forward declaration

class BankAccount {
private:
    double balance;

public:
    BankAccount(double bal) : balance(bal) {}

    friend bool isEligibleForLoan(const BankAccount &acc, const Loan &loan);
};

class Loan {
private:
    double requestedLoanAmount;

public:
    Loan(double amount) : requestedLoanAmount(amount) {}

    friend bool isEligibleForLoan(const BankAccount &acc, const Loan &loan);
};

bool isEligibleForLoan(const BankAccount &acc, const Loan &loan) {
    return (acc.balance >= 1000 && loan.requestedLoanAmount <= acc.balance);
}

int main() {
    BankAccount customer(2000); // Solde de 2000
    Loan loan(1500); // Demande de prêt de 1500

    if (isEligibleForLoan(customer, loan)) {
        cout << "Loan Approved!" << endl;
    } else {
        cout << "Loan Denied!" << endl;
    }

    return 0;
}
