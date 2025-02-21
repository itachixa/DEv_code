#include <iostream>
#include <vector>
using namespace std;

class Counter {
public:
    int value;
    
    Counter(int val) : value(val) {}

    Counter& operator++() {  
        ++value;  
        return *this;  
    }

    Counter operator++(int) {  
        Counter temp = *this;  // Save the current state
        value++;  
        return temp;  // Return original value before incrementing
    }
};

int main() {






    // Example 1: Pre-increment
    int x = 5;
    int y = ++x; 
    cout << "x = " << x << ", y = " << y  << endl;







   
    
    // Example 2: Post-increment
    x = 5;
    int z = x++; // x is assigned to z first, then incremented
    cout << "x = " << x << ", z = " << z << " (x was used first, then incremented)" << endl;






    
}
