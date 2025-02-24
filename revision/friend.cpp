#include <iostream>
using namespace std;
class objet{
    string nom;
    double poids;

 public :
 objet(double poid){
poids=poid;
 }
 friend double sum (objet ob,objet ob2);
};
double sum(objet ob, objet ob2){
    return ob.poids+ob2.poids;
};
int main(){
    objet pure1(6);
    objet pure2(7);
    cout<< sum(pure1,pure2);
}  