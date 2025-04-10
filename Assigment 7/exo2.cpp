#include <iostream>
using namespace std;

const double CREDIT_LIMIT_584 = 5000.0;

class QtyErr_584 {
public:
    const char* what_584() const {
        return "Quantity cannot be negative.";
    }
};

class PriceErr_584 {
public:
    const char* what_584() const {
        return "Price must be greater than zero.";
    }
};

class LimitErr_584 {
public:
    const char* what_584() const {
        return "Total cost exceeds credit limit.";
    }
};

void processOrder_584(int qty_584, double price_584) {
    try {
        if (qty_584 < 0)
            throw QtyErr_584();
        if (price_584 <= 0)
            throw PriceErr_584();

        double total_584 = qty_584 * price_584;
        if (total_584 > CREDIT_LIMIT_584)
            throw LimitErr_584();

        cout << "Order processed successfully. Total cost: " << total_584 << " USD" << endl;
    } catch (QtyErr_584& e_584) {
        cout << "Error: " << e_584.what_584() << endl;
    } catch (PriceErr_584& e_584) {
        cout << "Error: " << e_584.what_584() << endl;
    } catch (LimitErr_584& e_584) {
        cout << "Error: " << e_584.what_584() << endl;
    }
}

int main() {
    int qty_584;
    double price_584;

    cout << "Enter quantity: ";
    cin >> qty_584;
    cout << "Enter price per item: ";
    cin >> price_584;

    processOrder_584(qty_584, price_584);

    return 0;
}
