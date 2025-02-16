#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    // Constructor
    Number(int v) : value(v) {}

    // Overloading the + operator
    Number operator+(const Number &num) {
        return Number(value + num.value);
    }

    // Overloading the - operator
    Number operator-(const Number &num) {
        return Number(value - num.value);
    }

    // Function to display value
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(10), num2(5);

    Number sum = num1 + num2;  // Calls operator+
    Number diff = num1 - num2; // Calls operator-

    cout << "Addition Result: ";
    sum.display();

    cout << "Subtraction Result: ";
    diff.display();

    return 0;
}
