#include <iostream>
#include <string>

using namespace std;

class Employee_584 {
private:
    int empID_584;
    string name_584;
    double salary_584;
    string designation_584;

public:
    
    Employee_584(int id_584, string empName_584, double empSalary_584, string empDesignation_584) {
        empID_584 = id_584;
        name_584 = empName_584;
        salary_584 = empSalary_584;
        designation_584 = empDesignation_584;
    }

  
    Employee_584(const Employee_584 &emp_584) {
        empID_584 = emp_584.empID_584;
        name_584 = emp_584.name_584;
        salary_584 = emp_584.salary_584;
        designation_584 = emp_584.designation_584;
    }

   
    void displayDetails_584() {
        cout << "Employee ID: " << empID_584 << endl;
        cout << "Name: " << name_584 << endl;
        cout << "Salary: $" << salary_584 << endl;
        cout << "Designation: " << designation_584 << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    
    Employee_584 E1_584(101, "John Doe", 50000, "Software Engineer");

    
    Employee_584 E2_584 = E1_584;

    
    cout << "Employee 1 Details:" << endl;
    E1_584.displayDetails_584();

    cout << "Employee 2 (Copy of E1) Details:" << endl;
    E2_584.displayDetails_584();

    return 0;
}
