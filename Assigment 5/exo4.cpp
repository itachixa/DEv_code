#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() = 0; // Méthode virtuelle pure
    virtual ~Employee() {} // Destructeur virtuel
};

class FullTime : public Employee {
private:
    double basicSalary;

public:
    FullTime(double salary) : basicSalary(salary) {}

    double calculateSalary() override {
        return basicSalary;
    }
};

class PartTime : public Employee {
private:
    int hoursWorked;
    double hourlyRate;

public:
    PartTime(int hours, double rate) : hoursWorked(hours), hourlyRate(rate) {}

    double calculateSalary() override {
        return hoursWorked * hourlyRate;
    }
};

class Contractual : public Employee {
private:
    int projectsCompleted;
    double paymentPerProject;

public:
    Contractual(int projects, double payment) : projectsCompleted(projects), paymentPerProject(payment) {}

    double calculateSalary() override {
        return projectsCompleted * paymentPerProject;
    }
};

int main() {
    Employee *emp1 = new FullTime(5000);
    Employee *emp2 = new PartTime(40, 20);
    Employee *emp3 = new Contractual(5, 1000);

    cout << "Full-Time Employee Salary: $" << emp1->calculateSalary() << endl;
    cout << "Part-Time Employee Salary: $" << emp2->calculateSalary() << endl;
    cout << "Contractual Employee Salary: $" << emp3->calculateSalary() << endl;

    delete emp1;
    delete emp2;
    delete emp3;

    return 0;
}
