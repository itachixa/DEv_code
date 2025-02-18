#include <iostream>
using namespace std;

class Number_584 {
private:
    int value_584;
public:
   
    Number_584(int v_584) : value_584(v_584) {}

    Number_584 operator+(const Number_584 &num_584) {
        return Number_584(value_584 + num_584.value_584);
    }

    Number_584 operator-(const Number_584 &num_584) {
        return Number_584(value_584 - num_584.value_584);
    }

    
    void display_584() {
        cout << "Value: " << value_584 << endl;
    }
};

int main() {
    Number_584 num1_584(10), num2_584(5);

    Number_584 sum_584 = num1_584 + num2_584;  
    Number_584 diff_584 = num1_584 - num2_584; 

    cout << "Addition Result: ";
    sum_584.display_584();

    cout << "Subtraction Result: ";
    diff_584.display_584();

    return 0;
}
