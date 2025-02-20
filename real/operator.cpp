#include <iostream>
using namespace std;

int main() {
    // int x = 5;
    // int y = ++x; // x is incremented first, then assigned to y
    // cout << "x = " << x << ", y = " << y << endl; // Output: x = 6, y = 6

    
     int x = 5;
     x+=1;
     int y=x;
     cout << "x = " << x << ", y = " << y << endl; // Output: x = 6, y = 6

    
  

    
    // x=5;
    // int z = x++; // x is assigned to y first (z = 5), then x is incremented
    // cout << "x = " << x << ", z = " << z << endl; // Output: x = 6,  z= 5

    
    x=5;
    int z= x;
    x+=1;
    cout << "x = " << x << ", z = " << z << endl; // Output: x = 6,  z= 5


    // warrming don't confuse the += is juste  the additional and affectation operator 
    // so  x+=1 equal x=x+1  
    //  and x=+1 is just affectation  equal x=1 

    
    return 0;
}