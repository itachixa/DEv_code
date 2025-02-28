#include <iostream>
using namespace std;

class ElectricVehicle_584 {
    public:
    double batteryCapacity_584;

    public:
    void chargeBattery_584(double amount_584) {
        batteryCapacity_584 += amount_584;
    }
};

class FuelVehicle_584 {
    public:
    double fuelCapacity_584;

    public:
    void refuel_584(double amount_584) {
        fuelCapacity_584 += amount_584;
    }
};

class HybridCar_584 : public ElectricVehicle_584, public FuelVehicle_584 {
    public:
    string mode_584;

    public:
    HybridCar_584(double battery_584, double fuel_584, string mod_584) {
        batteryCapacity_584 = battery_584;
        fuelCapacity_584 = fuel_584;
        mode_584 = mod_584;
    }

    public:
    void drive_584(double distance_584) {
        if (mode_584 == "Electric") {
            if (batteryCapacity_584 < distance_584) {
                batteryCapacity_584 = (distance_584 - (distance_584 - batteryCapacity_584));
                cout << "You have already traveled " << (distance_584 - (distance_584 - batteryCapacity_584)) 
                     << " km, stop here and continue. You have " << distance_584 - batteryCapacity_584 << " km left.\n";
            } else {
                batteryCapacity_584 -= distance_584;
                cout << "Nice! You arrived, and you have " << batteryCapacity_584 << " kW left.\n";
            }
        } else if (mode_584 == "Fuel") {
            if (fuelCapacity_584 < distance_584) {
                fuelCapacity_584 = (distance_584 - (distance_584 - fuelCapacity_584));
                cout << "You have already traveled " << (distance_584 - (distance_584 - fuelCapacity_584)) 
                     << " km, stop here and continue. You have " << distance_584 - fuelCapacity_584 << " km left.\n";
            } else {
                fuelCapacity_584 -= distance_584;
                cout << "Nice! You arrived, and you have " << fuelCapacity_584 << " liters left.\n";
            }
        }
    }

    void switchMode_584(string newMode_584) {
        mode_584 = newMode_584;
    }

    void display_584() {
        cout << "The actual information of this car is:\n";
        cout << "Battery: " << batteryCapacity_584 << " kW\n";
        cout << "Fuel: " << fuelCapacity_584 << " liters\n";
        cout << "Current mode: " << mode_584 << endl;
    }
};

int main() {
    cout << "----------------- Simulation ------------------\n";
    HybridCar_584 R1_584(100, 100, "Electric");
    R1_584.drive_584(200);
    R1_584.switchMode_584("Fuel");
    R1_584.drive_584(100);
    R1_584.chargeBattery_584(100);
    R1_584.display_584();
}
