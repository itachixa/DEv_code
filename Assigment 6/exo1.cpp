#include <iostream>
using namespace std;

template <typename T_584>
T_584 findMax_584(T_584 a_584, T_584 b_584) {
    return (a_584 > b_584) ? a_584 : b_584;
}

int main() {
    
    int int1_584 = 10, int2_584 = 20;
    cout<< "Max of " << int1_584 << " and " << int2_584 << " is: " << findMax_584<int>(int1_584, int2_584) <<endl;

    
    double double1_584 = 12.5, double2_584 = 9.8;
    cout << "Max of " << double1_584 << " and " << double2_584 << " is: " << findMax_584<double>(double1_584, double2_584) <<endl;

    return 0;
}