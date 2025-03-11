#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void calculateFuelEfficiency() = 0; // Méthode virtuelle pure
    virtual ~Vehicle() {} // Destructeur virtuel
};

class Car : public Vehicle {
public:
    void calculateFuelEfficiency() override {
        cout << "Car: Fuel efficiency is 15 km/l" << endl;
    }
};

class Truck : public Vehicle {
public:
    void calculateFuelEfficiency() override {
        cout << "Truck: Fuel efficiency is 8 km/l" << endl;
    }
};

class Motorcycle : public Vehicle {
public:
    void calculateFuelEfficiency() override {
        cout << "Motorcycle: Fuel efficiency is 35 km/l" << endl;
    }
};

int main() {
    Vehicle *v1 = new Car();
    Vehicle *v2 = new Truck();
    Vehicle *v3 = new Motorcycle();

    v1->calculateFuelEfficiency();
    v2->calculateFuelEfficiency();
    v3->calculateFuelEfficiency();

    delete v1;
    delete v2;
    delete v3;

    return 0;
}
