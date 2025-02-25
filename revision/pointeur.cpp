#include <iostream>
using namespace std;

// Fonction qui utilise un pointeur pour modifier une valeur
void increment(int* ptr) {
    (*ptr)++;  // Augmente la valeur de l'entier pointé
}

// Fonction qui alloue un tableau dynamiquement et le remplit
int* createArray(int size) {
    int* arr = new int[size]; // Allocation dynamique
    for (int i = 0; i < size; i++) {
        arr[i] = i * 10; // Remplissage
    }
    return arr; // Retourne le pointeur vers le tableau
}

int main() {
    // 1️⃣ Déclaration et utilisation d'un pointeur
    int x = 10;
    int* ptr = &x; // ptr stocke l'adresse de x

    cout << "Adresse de x : " << &x << endl;
    cout << "Valeur de x via pointeur : " << *ptr << endl;

    // 2️⃣ Modification de la valeur via le pointeur
    *ptr = 20;  
    cout << "Nouvelle valeur de x : " << x << endl;

    // 3️⃣ Pointeurs et tableaux
    int tab[3] = {10, 20, 30};
    int* pTab = tab; // Un tableau agit comme un pointeur

    cout << "Tableau via pointeur : " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Element " << i << " : " << *(pTab + i) << endl;
    }

    // 4️⃣ Passage par adresse (modification d'une variable)
    int y = 5;
    cout << "Avant incrementation : " << y << endl;
    increment(&y);
    cout << "Après incrementation : " << y << endl;

    // 5️⃣ Allocation dynamique avec `new`
    int* dynVar = new int(50); // Allocation d'un entier
    cout << "Valeur allouée dynamiquement : " << *dynVar << endl;
    delete dynVar; // Libération de la mémoire

    // 6️⃣ Allocation d'un tableau dynamique
    int* dynArr = createArray(5);
    cout << "Tableau dynamique : " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "dynArr[" << i << "] = " << dynArr[i] << endl;
    }
    delete[] dynArr; // Libération du tableau

    // 7️⃣ Utilisation de nullptr pour sécuriser les pointeurs
    int* securePtr = nullptr;
    if (securePtr == nullptr) {
        cout << "Pointeur sécuritaire (nullptr) !" << endl;
    }

    return 0;
}
