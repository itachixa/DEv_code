#include <iostream>
using namespace std;

class employee_584
{
public:
    string nom_584, ID_584;
    double ours_worked_584, hourly_wage_584, salary_584;

public:
    employee_584(string pnom_584, string pid_584, double pours_worked_584, double phourly_wage_584)
    {
        nom_584 = pnom_584;
        ID_584 = pid_584;
        ours_worked_584 = pours_worked_584;
        hourly_wage_584 = phourly_wage_584;
    }

    void salar_584()
    {
        salary_584 = ours_worked_584 * hourly_wage_584;
    }

    void information_584()
    {
        cout << endl; 
        cout << "-----------------information-----------------" << endl;
        cout << "the name of employee is :" << nom_584 << endl;
        cout << "the ID of employee is :" << ID_584 << endl;
        cout << "the ours_worked of employee is :" << ours_worked_584 << endl;
        cout << "the hourly_wage of employee is :" << hourly_wage_584 << endl;
        cout << "the salaryof employee is :" << salary_584 << endl;
    }
};

int main()
{
    string name_584, id_584;
    double ours_worked_584, hourly_wage_584;
    cout << " enter the name of employee  :";
    cin >> name_584;

    cout << "enter the ID of employee :";
    cin >> id_584;

    cout << "enter the ours_worked of employee  :";
    cin >> ours_worked_584;

    cout << "enter the hourly_wage of employee  :";
    cin >> hourly_wage_584;
    employee_584 mael_584(name_584, id_584, ours_worked_584, hourly_wage_584);
    mael_584.salar_584();
    mael_584.information_584();
}
