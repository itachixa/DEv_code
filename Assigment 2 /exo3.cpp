#include <iostream>
using namespace std;

class Vehicule_584 {
    protected:
    string color_584;
    double speed_584;
};

class Car_584: public Vehicule_584 {
    int number_door_584;

public:
    Car_584(string c_584, double s_584, int n_584) {
        color_584 = c_584;
        speed_584 = s_584;
        number_door_584 = n_584;
    }

    void display_584() {
        cout << "------------------The propriety of Car-------------------" << endl;
        cout << "The color of Car is: " << color_584 << endl;
        cout << "The speed of Car is: " << speed_584 << endl;
        cout << "The number of the doors in this car is: " << number_door_584 << endl;
        cout << endl;
    }
};

class Bike_584: public Vehicule_584 {
    int number_crutch_584;

public:
    Bike_584(string c_584, double s_584, int n_584) {
        color_584 = c_584;
        speed_584 = s_584;
        number_crutch_584 = n_584;
    }

    void display_584() {
        cout << "------------------The property of Bike-------------------" << endl;
        cout << "The color of Bike is: " << color_584 << endl;
        cout << "The speed of Bike is: " << speed_584 << endl;
        cout << "The number of the crutches in this bike is: " << number_crutch_584 << endl;
        cout << endl;
    }
};

int main() {
    Car_584 car1_584("red", 156, 4);
    car1_584.display_584();

    Bike_584 bike1_584("black", 156, 2);
    bike1_584.display_584();
}
