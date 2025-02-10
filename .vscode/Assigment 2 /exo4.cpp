#include <iostream>
using namespace std;

class Employee_584 {
    private:
    double salary_584;
    double bonus_584;

    public: Employee_584(double s_584, double b_584){
        salary_584 = s_584;
        bonus_584 = b_584;
    }

    double calculateTotallncome_584(){
        return salary_584 + bonus_584;
    }
};

int main() {
    Employee_584 Emp1_584(1000, 200);
    cout << endl;
    cout << "The real salary is: " << Emp1_584.calculateTotallncome_584() << endl;
}
