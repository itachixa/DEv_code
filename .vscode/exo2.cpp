#include <iostream>
# include <iomanip>
using namespace std;
class  Nombre
{
public:
     double a;
     double b;

     void  set(double x, double y){
       a=x;
       b=y;
     }
     double getA(){
        return a;
     }
      double getB(){
        return b;
     }

     double Adittion(){
       return a+b; 
     }
    double Soustrqction(){
       return a-b; 
     }
     double Multiplication(){
       return a*b; 
     }
};

int  main (){
   Nombre nb;
   nb.set(5,7);
   cout << nb.a << " + "<< nb.b << " = "<<nb.Adittion() <<endl;

   nb.set(3.7,8.0);
   cout << nb.a << " + "<< fixed << setprecision(1) << nb.b << " = "<<nb.Adittion()<<endl;
   
   cout<<setprecision(0);
   nb.set(5,8.0);
   cout << nb.a << " + "<< fixed << setprecision(1) << nb.b << " = "<<  nb.Adittion()<<endl;
   cout<<setprecision(0);

   nb.set(5,7);
   cout << nb.a << " - "<< nb.b << " = "<<nb.Soustrqction()<<endl;
   cout<<setprecision(0);

   nb.set(3.7,8.0);
   cout <<  fixed << setprecision(1) << nb.a << " - "<< nb.b << " = "<< fixed << setprecision(1) <<nb.Soustrqction()<<endl;
   cout<<setprecision(0);

   nb.set(5,8.0);
   cout << nb.a << " - "<<fixed << setprecision(1) <<nb.b << " = " <<nb.Soustrqction()<<endl;
   cout<<setprecision(0);

   nb.set(5,7);
   cout << nb.a << " * "<< nb.b << " = "<<nb.Multiplication()<<endl;

   nb.set(3.7,8.0);
   cout << fixed << setprecision(1) << nb.a << " * "<< nb.b << " = "<< nb.Multiplication()<<endl;


   




    
}
   

