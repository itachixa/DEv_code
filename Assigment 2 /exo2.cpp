#include <iostream>
using namespace std;

class Rectangle_584
{
    private:
    double width_584;
    double length_584;
    public: Rectangle_584(double w_584, double l_584){
        width_584 = w_584;
        length_584 = l_584;
    }

    double perimeter_584(){
        return (width_584 + length_584) * 2;
    }

    double area_584(){
        return width_584 * length_584;
    }
};

int main(){
    Rectangle_584 R1_584(7, 5);
    cout << endl;
    cout << "The perimeter of rectangle is: " << R1_584.perimeter_584() << endl;
    cout << "The area of rectangle is: " << R1_584.area_584() << endl;

    return 0;
}
