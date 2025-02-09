#include <iostream>
#include <iomanip>
using namespace std;
class Nombre_584
{
public:
  double a_584;
  double b_584;

  void set_584(double x, double y)
  {
    a_584 = x;
    b_584 = y;
  }
  double getA_584()
  {
    return a_584;
  }
  double getB_584()
  {
    return b_584;
  }

  double Adittion_584()
  {
    return a_584 + b_584;
  }
  double Soustraction_584()
  {
    return a_584 - b_584;
  }
  double Multiplication_584()
  {
    return a_584 * b_584;
  }
};

int main()
{
  Nombre_584 nb_584;
  nb_584.set_584(5, 7);
  cout << nb_584.a_584 << " + " << nb_584.b_584 << " = " << nb_584.Adittion_584() << endl;

  nb_584.set_584(3.7, 8.0);
  cout << nb_584.a_584 << " + " << fixed << setprecision(1) << nb_584.b_584 << " = " << nb_584.Adittion_584() << endl;

  cout << setprecision(0);
  nb_584.set_584(5, 8.0);
  cout << nb_584.a_584 << " + " << fixed << setprecision(1) << nb_584.b_584 << " = " << nb_584.Adittion_584() << endl;
  cout << setprecision(0);

  nb_584.set_584(5, 7);
  cout << nb_584.a_584 << " - " << nb_584.b_584 << " = " << nb_584.Soustraction_584() << endl;
  cout << setprecision(0);

  nb_584.set_584(3.7, 8.0);
  cout << fixed << setprecision(1) << nb_584.a_584 << " - " << nb_584.b_584 << " = " << fixed << setprecision(1) << nb_584.Soustraction_584() << endl;
  cout << setprecision(0);

  nb_584.set_584(5, 8.0);
  cout << nb_584.a_584 << " - " << fixed << setprecision(1) << nb_584.b_584 << " = " << nb_584.Soustraction_584() << endl;
  cout << setprecision(0);

  nb_584.set_584(5, 7);
  cout << nb_584.a_584 << " * " << nb_584.b_584 << " = " << nb_584.Multiplication_584() << endl;

  nb_584.set_584(3.7, 8.0);
  cout << fixed << setprecision(1) << nb_584.a_584 << " * " << nb_584.b_584 << " = " << nb_584.Multiplication_584() << endl;
}
