#include <iostream>
using namespace std;

class Produit_584 {
    string productID_584, productName_584;
    double price_584;
    int quantity_584;

public:
    Produit_584() {
        productID_584 = " ";
        productName_584 = " ";
        price_584 = 0;
        quantity_584 = 0;
    }
    Produit_584(string proID_584, string proName_584, double pri_584, int qty_584) {
        productID_584 = proID_584;
        productName_584 = proName_584;
        price_584 = pri_584;
        quantity_584 = qty_584;
    }

   
    double calculateTotalPrice_584() {
        return quantity_584 * price_584;
    }

    
    ~Produit_584() {
        cout << "The product " << productName_584 << " (ID: " << productID_584 << ") is removed." << endl;
    }

    
    void display_584() {
        cout << "ID: " << productID_584 << ", Name: " << productName_584
             << ", Price: " << price_584 << ", Quantity: " << quantity_584
             << ", Total: " << calculateTotalPrice_584() << endl;
    }
};

int main() {
    Produit_584 objt_array_584[2];

    Produit_584 Produit1_584("QWERTY4", "Pasta", 100, 5);
    objt_array_584[0] = Produit1_584;

    Produit_584 Produit2_584("ASDFG5", "Briani", 200, 3);
    objt_array_584[1] = Produit2_584;


    cout << "Products in the cart:" << endl;
    for (int i_584 = 0; i_584 < 2; i_584++) {
        objt_array_584[i_584].display_584();
    }

    return 0;
}
