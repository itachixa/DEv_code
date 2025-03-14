#include <iostream>
using namespace std;

class Vehicle_584 {
public:
    virtual void calculateFuelEfficiency_584() = 0;
    virtual ~Vehicle_584() {}
};

class Car_584 : public Vehicle_584 {
public:
    void calculateFuelEfficiency_584() override {
        cout << "Car: Fuel efficiency is 15 km/l" << endl;
    }
};

class Truck_584 : public Vehicle_584 {
public:
    void calculateFuelEfficiency_584() override {
        cout << "Truck: Fuel efficiency is 8 km/l" << endl;
    }
};

class Motorcycle_584 : public Vehicle_584 {
public:
    void calculateFuelEfficiency_584() override {
        cout << "Motorcycle: Fuel efficiency is 35 km/l" << endl;
    }
};

int main() {
    Vehicle_584 *v1_584 = new Car_584();
    Vehicle_584 *v2_584 = new Truck_584();
    Vehicle_584 *v3_584 = new Motorcycle_584();

    v1_584->calculateFuelEfficiency_584();
    v2_584->calculateFuelEfficiency_584();
    v3_584->calculateFuelEfficiency_584();

    delete v1_584;
    delete v2_584;
    delete v3_584;

    return 0;
}
