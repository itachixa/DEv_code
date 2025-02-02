#include <iostream>
#include <iomanip> // Pour std::fixed et std::setprecision
using namespace std;

int main() {
    double nombre = 13; // Double contenant le nombre 13

    // Affichage avec 1 chiffre après la virgule
    cout << fixed << setprecision(1) << nombre ;

    return 0;
}
