#include <iostream>
#include <math.h>
using namespace std;
class Triangle_584
{
    public:
    double a_584;
    double b_584;
    double c_584;
 
    double AirTriangle_584
(){
        double s_584= (a_584+b_584+c_584)/2;
        return sqrt(s_584*(s_584-a_584)*(s_584-b_584)*(s_584-c_584));
    }
};
int main (){
 Triangle_584 Tr_584;
 cout<<"---------------------------------------\n";

 cout<< "Input the length of 1st side  of the Triangle:";
 cin>>Tr_584.a_584;

 cout<< "Input the length of 2nd side  of the Triangle:";
 cin>> Tr_584.b_584;

 cout<< "Input the length of 3rd side  of the Triangle :";
 cin >> Tr_584.c_584;

 cout << "The area of Triangle_584is :"<<Tr_584.AirTriangle_584()<<"\n";
}