#include <iostream>
#include <math.h>
using namespace std;
class Triangle
{
    public:
    double a;
    double b;
    double c;
 
    double AirTriangle(){
        double s= (a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
};
int main (){
 Triangle Tr;
 cout<< "Input the length of 1st side  of the triangle:";
 cin>>Tr.a;

 cout<< "Input the length of 2nd side  of the triangle:";
 cin>> Tr.b;

 cout<< "Input the length of 3rd side  of the triangl :";
 cin >> Tr.c;
 cout << "The area of triangle is :"<<Tr.AirTriangle()<<"\n";
}