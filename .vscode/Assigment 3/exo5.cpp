#include <iostream>
using namespace std;

class Number_584 {
private:
    int value_584;

public:
   
    Number_584(int v_584) {
        value_584 = v_584;
    } 

    

    string operator<=(const Number_584 &num_584) {
        if (value_584 > num_584.value_584) {
            return "is bigger than";
        } else if (value_584 < num_584.value_584) {
            return "is smaller than";
        } else {
            return "is equal to";
        }
    }

    void display_584() {
        cout << "Value: " << value_584 << endl;
    }
};

int main() {
    Number_584 num1_584(10), num2_584(20);
    cout << "num1_584 " << (num1_584<=num2_584) << " num2_584" << endl;
    return 0;
}
