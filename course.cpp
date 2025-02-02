#include <iostream>                                                  // Bibliothèque standard pour les entrées et sorties
using namespace std;                                                 // Utilisation de l'espace de noms standard pour éviter de préfixer std::

class MyClass {                                                      // Définition d'une classe
private:                                                             // Spécificateur d'accès privé : accessible uniquement depuis l'intérieur de la classe
    int myPrivateNum;                                                // Attribut privé (non accessible directement depuis un objet)

protected:                                                           // Spécificateur d'accès protégé : accessible dans la classe et ses classes dérivées
    string myProtectedString;                                        // Attribut protégé

public:                                                              // Spécificateur d'accès public : accessible depuis l'extérieur de la classe
    double myNum;                                                       // Attribut public (accessible directement)
    string myString;                                                 // Attribut public

    // Constructeur par défaut
    MyClass() {
        myNum = 0;                                                   // Initialisation de l'attribut public
        myString = "Default";                                        // Initialisation de l'attribut public
        myPrivateNum = 100;                                          // Initialisation de l'attribut privé
        myProtectedString = "Protected Data";                        // Initialisation de l'attribut protégé
    }

    // Constructeur paramétré
    MyClass(int num, string str) {
        myNum = num;                                                 // Initialise `myNum` avec une valeur donnée
        myString = str;                                              // Initialise `myString` avec une valeur donnée
        myPrivateNum = num * 2;                                      // Exemple de logique dans un constructeur
    }

    // Méthode publique pour afficher les attributs
    void displayData() {
        cout << "Public Number: " << myNum << endl;
        cout << "Public String: " << myString << endl;
    }

    // Méthode pour accéder à l'attribut privé
    int getPrivateNum() {
        return myPrivateNum;                                         // Retourne la valeur de l'attribut privé
    }

    // Méthode pour modifier l'attribut protégé
    void setProtectedString(string newString) {
        myProtectedString = newString;                               // Modifie l'attribut protégé
    }

    // Méthode pour afficher l'attribut protégé
    void displayProtectedString() {
        cout << "Protected String: " << myProtectedString << endl;
    }
};

int main() {                                                        // Point d'entrée principal du programme
    MyClass obj1;                                                   // Création d'un objet avec le constructeur par défaut
    MyClass obj2(42, "Custom Text");                                // Création d'un objet avec le constructeur paramétré

    // Affichage des données de l'objet créé avec le constructeur par défaut
    cout << "Obj1 Data:" << endl;
    obj1.displayData();
    cout << "Private Num (Obj1): " << obj1.getPrivateNum() << endl; // Accès à l'attribut privé via une méthode publique

    // Affichage des données de l'objet créé avec le constructeur paramétré
    cout << "\nObj2 Data:" << endl;
    obj2.displayData();
    cout << "Private Num (Obj2): " << obj2.getPrivateNum() << endl; // Accès à l'attribut privé via une méthode publique

    // Modification et affichage de l'attribut protégé
    obj2.setProtectedString("Updated Protected Data");
    obj2.displayProtectedString();

    return 0;                                                      // Indique que le programme s'est terminé avec succès
}
