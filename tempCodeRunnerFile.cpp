#include <iostream>
#include <vector>
using namespace std;

class Counter {
public:
    int value;
    
    Counter(int val) : value(val) {}

    // Remplacement de l'opérateur de pré-incrémentation (++x)
    Counter& increment() {
        value = value + 1;
        return *this;
    }

    // Remplacement de l'opérateur de post-incrémentation (x++)
    Counter incrementPost() {
        Counter temp = *this;
        value = value + 1;
        return temp;
    }
};

int main() {
    // Exemple 1: Pré-incrémentation
    int x = 5;
    int y = (x = x + 1); 
    cout << "Pre-Increment: \n";
    cout << "x = " << x << ", y = " << y << " (x a été incrémenté d'abord)" << endl;
    cout << "------------------------------------------" << endl;

    // Exemple 2: Post-incrémentation
    x = 5;
    int z = x;
    x = x + 1;
    cout << "Post-Increment: \n";
    cout << "x = " << x << ", z = " << z << " (x a été utilisé d'abord, puis incrémenté)" << endl;
    cout << "------------------------------------------" << endl;

    // Exemple 3: Utilisation avec une classe Counter
    Counter c(5);
    cout << "Valeur du compteur avant incrémentation: " << c.value << endl;
    Counter c1 = c.increment(); // Pré-incrémentation
    cout << "Après Pre-Increment (c.increment()): " << c.value << endl;
    Counter c2 = c.incrementPost(); // Post-incrémentation
    cout << "Après Post-Increment (c.incrementPost()): " << c.value << " (Valeur retournée: " << c2.value << ")" << endl;
    cout << "------------------------------------------" << endl;

    // Exemple 4: Itération avec vecteurs
    vector<int> v = {10, 20, 30, 40};

    cout << "Utilisation de l'affectation + addition en itération: ";
    for (auto it = v.begin(); it != v.end(); ) {
        cout << *it << " ";
        it = it + 1;
    }
    cout << endl;

    return 0;
}
