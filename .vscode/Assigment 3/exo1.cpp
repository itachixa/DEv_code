#include <iostream>
using namespace std;

class Produit {
    string productID, productName;
    double price;
    int quantity;

public:
    Produit() {
        productID = " ";
        productName = " ";
        price = 0;
        quantity = 0;
    }
    Produit(string proID, string proName, double pri, int qty) {
        productID = proID;
        productName = proName;
        price = pri;
        quantity = qty;
    }

   
    double calculateTotalPrice() {
        return quantity * price;
    }

    
    ~Produit() {
        cout << "The product " << productName << " (ID: " << productID << ") is removed." << endl;
    }

    
    void display() {
        cout << "ID: " << productID << ", Name: " << productName
             << ", Price: " << price << ", Quantity: " << quantity
             << ", Total: " << calculateTotalPrice() << endl;
    }
};

int main() {
    Produit objt_array[2];

    Produit Produit1("QWERTY4", "Pasta", 100, 5);
    objt_array[0] = Produit1;

    Produit Produit2("ASDFG5", "Briani", 200, 3);
    objt_array[1] = Produit2;


    cout << "Products in the cart:" << endl;
    for (int i = 0; i < 2; i++) {
        objt_array[i].display();
    }

    return 0;
}
