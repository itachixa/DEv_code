#include <iostream>
using namespace std;
class vehicule{
    private:
      string nom;
    protected:
      double  prix;
    public:
    string marque;

  public:
  vehicule(string m,double pri,string n){
    marque= m;
    prix=pri;
    nom=n;
    

  }
  void dispay(){
    cout<< "le prix est :"<< prix;
  };

};
class voiture: public vehicule {
  public:
  voiture(string m,double pri,string n)
  : vehicule( m, pri,n){}

  void dispay(){
    cout<< "le prix est :"<< prix;
  }
};

int main(){
    // acces for public attribut
    vehicule V1("voiture",24,"toyota");
    cout<<V1.marque;

    // acces for protected attribut
    V1.dispay();

    // acces for private function
    voiture V12("voiture",24,"toyota");
    V12.dispay();


}