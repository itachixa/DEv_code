#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = ++x; // x is incremented first, then assigned to y
    cout << "x = " << x << ", y = " << y << endl; // Output: x = 6, y = 6




    int z = x++; // x is assigned to y first (z = 5), then x is incremented
    cout << "x = " << x << ", z = " << z << endl; // Output: x = 6,  z= 5
    return 0;
}