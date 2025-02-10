#include <iostream>
using namespace std;

class Car_584 {
private:
    string engineType_584;  

protected:
    double fuelCapacity_584;  

public:
    string brand_584;  
    
    Car_584(string eng_584, double fuel_584, string br_584) {
        engineType_584 = eng_584;
        fuelCapacity_584 = fuel_584;
        brand_584 = br_584;
    }

    void showEngineType_584() {
        cout << "Engine Type: " << engineType_584 << endl;
    }
};

class SportsCar_584 : public Car_584 {
public:
    SportsCar_584(string eng_584, double fuel_584, string br_584) : Car_584(eng_584, fuel_584, br_584) {}

    void showFuelCapacity_584() {
        cout << "Fuel Capacity: " << fuelCapacity_584 << " liters" << endl;
    }
};

int main() {
    Car_584 myCar_584("V8", 60, "Toyota");

    cout << "Car Brand: " << myCar_584.brand_584 << endl;

    myCar_584.showEngineType_584();

    SportsCar_584 mySportsCar_584("V12", 80, "Ferrari");
    mySportsCar_584.showFuelCapacity_584();

    return 0;
}
