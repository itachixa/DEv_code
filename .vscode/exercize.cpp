#include <iostream>
using namespace std;
int main (){
    double a,b;
    int choise;
    cout <<"chose the operation \n 1-Additional \n 2-Soustraction \n 3-Multiplication \n";
    cin >>choise;
    switch (choise)
    {
    case 1:

      cout <<" enter a number ";
      cin>> a;
      cout <<" enter a number ";
      cin>> b;
      cout << a<< "+"<< b<<"="<<a+b <<"\n";
       
        break;
    case 2:

      cout <<" enter a number ";
      cin>> a;
      cout <<" enter a number ";
      cin>> b;
      cout << a<< "-"<< b<<"="<<a-b<<"\n";
        
        break;   
    
    case 3:
      cout <<" enter a number ";
      cin>> a;
      cout <<" enter a number ";
      cin>> b;
      cout << a<< "*"<< b<<"="<<a*b<<"\n";
        
        break;

    default:
         cout<< "your is'nt valide\n";
        break;
    }
}