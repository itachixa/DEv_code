#include<iostream>
using namespace std;
class vehicule {
    public:
    double poid=24;
};

class voiture:public vehicule {
  public :
  void diplay(){
    cout << "le poid de la voiture est :"<<poid;
  }
};

class moto : public vehicule{
     private:
     double vitess_max=12;
     
};
class hajoue : public moto{
    public:
     double getVitessMax() {
        return vitess_max;
    }
    void diplays(){
        cout << "le poid de la moto :"<<poid;
        cout << "la vitesse max  de la moto :"<<getVitessMax();
    }
};
int main(){
    voiture  v;
    v.diplay();


}