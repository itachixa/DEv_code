#include <iostream>
#include <vector>
using namespace std;

// 🔹 Class to Demonstrate Operator Overloading
class Counter {
public:
    int value;
    
    Counter(int val) : value(val) {}

    // Overloading Pre-Increment (++x)
    Counter& operator++() {  
        ++value;  
        return *this;  
    }

    // Overloading Post-Increment (x++)
    Counter operator++(int) {  
        Counter temp = *this;  // Save the current state
        value++;  
        return temp;  // Return original value before incrementing
    }
};

int main() {
    cout << "🔹 Pre-Increment vs. Post-Increment in C++ 🔹" << endl;
    cout << "------------------------------------------" << endl;

    // Example 1: Pre-Increment (++x)
    int x = 5;
    int y = ++x; // x is incremented first, then assigned to y
    cout << "Pre-Increment: \n";
    cout << "x = " << x << ", y = " << y << " (x was incremented first)" << endl;
    cout << "------------------------------------------" << endl;

    // Example 2: Post-Increment (x++)
    x = 5;
    int z = x++; // x is assigned to z first, then incremented
    cout << "Post-Increment: \n";
    cout << "x = " << x << ", z = " << z << " (x was used first, then incremented)" << endl;
    cout << "------------------------------------------" << endl;

    // Example 3: Using Pre-Increment and Post-Increment with Objects
    Counter c(5);
    cout << "Counter value before increment: " << c.value << endl;
    Counter c1 = ++c; // Pre-Increment
    cout << "After Pre-Increment (++c): " << c.value << endl;
    Counter c2 = c++; // Post-Increment
    cout << "After Post-Increment (c++): " << c.value << " (Returned value: " << c2.value << ")" << endl;
    cout << "------------------------------------------" << endl;

    // Example 4: Using Pre-Increment and Post-Increment with Vectors
    vector<int> v = {10, 20, 30, 40};

    cout << "Using Post-Increment in Iteration: ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " "; // Output: 10 20 30 40
    }
    cout << endl;

    cout << "Using Pre-Increment in Iteration: ";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " "; // Output: 10 20 30 40
    }
    cout << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
