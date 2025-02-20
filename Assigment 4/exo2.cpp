#include <iostream>
using namespace std;

// Base class 1: ElectricVehicle
class ElectricVehicle {
protected:
    double batteryCapacity; // kWh

public:
    ElectricVehicle(double battery) : batteryCapacity(battery) {}

    void chargeBattery(double amount) {
        batteryCapacity += amount;
        cout << "🔋 Battery charged by " << amount << " kWh | Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }

    double getBatteryCapacity() const { return batteryCapacity; }
};

// Base class 2: FuelVehicle
class FuelVehicle {
protected:
    double fuelCapacity; // Liters

public:
    FuelVehicle(double fuel) : fuelCapacity(fuel) {}

    void refuel(double amount) {
        fuelCapacity += amount;
        cout << "⛽ Refueled " << amount << "L | Fuel Capacity: " << fuelCapacity << "L" << endl;
    }

    double getFuelCapacity() const { return fuelCapacity; }
};

// Derived class: HybridCar (inherits from ElectricVehicle & FuelVehicle)
class HybridCar : public ElectricVehicle, public FuelVehicle {
private:
    string mode; // "Electric" or "Fuel"

public:
    HybridCar(double battery, double fuel, string initialMode)
        : ElectricVehicle(battery), FuelVehicle(fuel), mode(initialMode) {}

    void switchMode(string newMode) {
        if (newMode == "Electric" || newMode == "Fuel") {
            mode = newMode;
            cout << "🚗 Mode switched to: " << mode << endl;
        } else {
            cout << "❌ Invalid mode! Use 'Electric' or 'Fuel'." << endl;
        }
    }

    void drive(double distance) {
        cout << "🚘 Driving " << distance << " km in " << mode << " mode..." << endl;

        if (mode == "Electric") {
            double energyUsed = (distance * 0.2); // 0.2 kWh/km
            if (batteryCapacity >= energyUsed) {
                batteryCapacity -= energyUsed;
                cout << "🔋 Battery used: " << energyUsed << " kWh | Remaining: " << batteryCapacity << " kWh" << endl;
            } else {
                cout << "❌ Not enough battery! Please charge." << endl;
            }
        } else if (mode == "Fuel") {
            double fuelUsed = (distance * 0.05); // 0.05 L/km
            if (fuelCapacity >= fuelUsed) {
                fuelCapacity -= fuelUsed;
                cout << "⛽ Fuel used: " << fuelUsed << " L | Remaining: " << fuelCapacity << " L" << endl;
            } else {
                cout << "❌ Not enough fuel! Please refuel." << endl;
            }
        }
    }

    void displayStatus() const {
        cout << "🔋 Battery: " << batteryCapacity << " kWh | ⛽ Fuel: " << fuelCapacity << " L | 🚗 Mode: " << mode << endl;
    }
};

// Main function
int main() {
    cout << "🔹 Hybrid Car System Simulation 🔹" << endl;

    HybridCar hybrid(50.0, 30.0, "Electric");
    hybrid.displayStatus();

    cout << "------------------------------------------" << endl;

    hybrid.drive(100); // Drive in Electric mode
    hybrid.switchMode("Fuel");
    hybrid.drive(200); // Drive in Fuel mode
    hybrid.chargeBattery(10); // Charge battery
    hybrid.refuel(10); // Refuel tank
    hybrid.switchMode("Electric");
    hybrid.drive(50); // Drive again in Electric mode

    cout << "------------------------------------------" << endl;
    hybrid.displayStatus(); // Display final status

    return 0;
}
