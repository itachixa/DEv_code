#include <iostream>
using namespace std;

class Employee_584 {
public:
    virtual double calculateSalary_584() = 0;
    virtual ~Employee_584() {}
};

class FullTime_584 : public Employee_584 {
private:
    double basicSalary_584;

public:
    FullTime_584(double salary_584) : basicSalary_584(salary_584) {}

    double calculateSalary_584() override {
        return basicSalary_584;
    }
};

class PartTime_584 : public Employee_584 {
private:
    int hoursWorked_584;
    double hourlyRate_584;

public:
    PartTime_584(int hours_584, double rate_584) : hoursWorked_584(hours_584), hourlyRate_584(rate_584) {}

    double calculateSalary_584() override {
        return hoursWorked_584 * hourlyRate_584;
    }
};

class Contractual_584 : public Employee_584 {
private:
    int projectsCompleted_584;
    double paymentPerProject_584;

public:
    Contractual_584(int projects_584, double payment_584) : projectsCompleted_584(projects_584), paymentPerProject_584(payment_584) {}

    double calculateSalary_584() override {
        return projectsCompleted_584 * paymentPerProject_584;
    }
};

int main() {
    Employee_584 *emp1_584 = new FullTime_584(5000);
    Employee_584 *emp2_584 = new PartTime_584(40, 20);
    Employee_584 *emp3_584 = new Contractual_584(5, 1000);

    cout << "Full-Time Employee Salary: $" << emp1_584->calculateSalary_584() << endl;
    cout << "Part-Time Employee Salary: $" << emp2_584->calculateSalary_584() << endl;
    cout << "Contractual Employee Salary: $" << emp3_584->calculateSalary_584() << endl;

    delete emp1_584;
    delete emp2_584;
    delete emp3_584;

    return 0;
}
