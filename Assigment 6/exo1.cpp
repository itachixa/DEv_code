#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    
    int int1 = 10, int2 = 20;
    cout<< "Max of " << int1 << " and " << int2 << " is: " << findMax<int>(int1, int2) <<endl;

    
    double double1 = 12.5, double2 = 9.8;
    cout << "Max of " << double1 << " and " << double2 << " is: " << findMax<double>(double1, double2) <<endl;

    return 0;
}