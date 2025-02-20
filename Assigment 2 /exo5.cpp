#include <iostream>
using namespace std;

class Triangle_584 {
private:
    double base_584;
    double height_584;

public:
    Triangle_584() {
        base_584 = 0;
        height_584 = 0;
    }

    Triangle_584(double b_584, double h_584) {
        base_584 = b_584;
        height_584 = h_584;
    }

    Triangle_584(double side_584) {
        base_584 = side_584;
        height_584 = side_584;
    }

    double area_584() {
        return 0.5 * base_584 * height_584;
    }

    void display_584() {
        cout << "Base: " << base_584 << ", Height: " << height_584 << " \nArea: " << area_584() << endl << "------------------------------\n";
    }
};

int main() {

    Triangle_584 t1_584;           
    Triangle_584 t2_584(10, 5);    
    Triangle_584 t3_584(7);        

    cout << "Triangle 1: ";
    t1_584.display_584();

    cout << "Triangle 2: ";
    t2_584.display_584();

    cout << "Triangle 3: ";
    t3_584.display_584();

    return 0;
}
