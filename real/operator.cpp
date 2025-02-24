#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Example 1: Pre-increment
    int x = 5;
    int y = ++x; 





   
    // Example 2: Post-increment
    int a = 5;
    int b = a++; 





















    cout << "=========================================\n";
    cout << "         Pre-Increment (++x)             \n";
    cout << "=========================================\n";
    cout << "Before increment: x = 5\n";
    cout << "After increment:  x = " << x << ", y = " << y << endl;
    cout << "-----------------------------------------\n\n";


    cout << "=========================================\n";
    cout << "         Post-Increment (x++)            \n";
    cout << "=========================================\n";
    cout << "Before increment: a = 5\n";
    cout << "After increment:  a = " << x << ", b = " << b << endl;
    cout << "-----------------------------------------\n";

    return 0;
}
