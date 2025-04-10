#include <iostream>
using namespace std;

class Invalid_584 {
public:
    const char* what_584() const {
        return "Invalid withdrawal amount (negative or exceeds balance).";
    }
};

void withdraw_584(double amount_584, double balance_584) {
    try {
        if (amount_584 < 0 || amount_584 > balance_584) {
            throw Invalid_584();
        }
        balance_584 -= amount_584;
        cout << "Withdrawal successful. New balance: " << balance_584 << " USD" << endl;
    } catch (Invalid_584& e_584) {
        cout << "Error: " << e_584.what_584() << endl;
    }
}

int main() {
    double balance_584 = 1000.0;
    double amount_584;

    cout << "Enter withdrawal amount: ";
    cin >> amount_584;

    withdraw_584(amount_584, balance_584);

    return 0;
}
