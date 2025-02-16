#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int empID;
    string name;
    double salary;
    string designation;

public:
    // Parameterized Constructor
    Employee(int id, string empName, double empSalary, string empDesignation) {
        empID = id;
        name = empName;
        salary = empSalary;
        designation = empDesignation;
    }

    // Copy Constructor
    Employee(const Employee &emp) {
        empID = emp.empID;
        name = emp.name;
        salary = emp.salary;
        designation = emp.designation;
    }

    // Function to display Employee details
    void displayDetails() {
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Designation: " << designation << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    // Creating Employee E1 using the parameterized constructor
    Employee E1(101, "John Doe", 50000, "Software Engineer");

    // Creating Employee E2 using the copy constructor (copy of E1)
    Employee E2 = E1;

    // Display details of both employees
    cout << "Employee 1 Details:" << endl;
    E1.displayDetails();

    cout << "Employee 2 (Copy of E1) Details:" << endl;
    E2.displayDetails();

    return 0;
}
