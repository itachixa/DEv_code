#include <iostream>
#include <math.h>
using namespace std;
class Point_584 {
    public:
    double x_584;
    double y_584;
};

    double Distance ( Point_584 p1,Point_584 p2){
        return sqrt(pow((p2.x_584-p1.x_584),2) +pow((p2.y_584-p1.y_584),2)) ;

    
};
int main(){
    Point_584 P1_584;
    Point_584 P2_584; 
    cout << "Input the latitude of coordinte 1: ";
    cin>>P1_584.x_584;

    cout << "Input the longitude of coordinte 1: ";
    cin>>P1_584.y_584;

    cout << "Input the latitude of coordinte 2: ";
    cin >> P2_584.x_584;

    cout << "Input the longitude of coordinte 2: ";
    cin>>P2_584.y_584;

    cout<<"The distance between those Point_584s is:" <<Distance(P1_584,P2_584)<<endl;
}