#include <iostream>
#include <math.h>
using namespace std;
class Point {
    public:
    double x;
    double y;
};

    double Distance ( Point p1,Point p2){
        return sqrt(pow((p2.x-p1.x),2) +pow((p2.y-p1.y),2)) ;

    
};
int main(){
    Point P1;
    Point P2; 
    cout << "Input the latitude of coordinte 1: ";
    cin>>P1.x;

    cout << "Input the longitude of coordinte 1: ";
    cin>>P1.y;

    cout << "Input the latitude of coordinte 2: ";
    cin >> P2.x;

    cout << "Input the longitude of coordinte 2: ";
    cin>>P2.y;

    cout<<"The distance between those points is:" <<Distance(P1,P2)<<endl;
}