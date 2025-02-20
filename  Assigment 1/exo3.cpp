#include <iostream>
using namespace std;

void order(int A_584[], int B_584[],int C_584[], int sizeA_584, int sizeB_584,int sizeC_584) {

    int i_584, y_584;

    for (i_584 = 0; i_584 < sizeA_584; i_584++) {
        C_584[i_584] = A_584[i_584];
    }

   
    for (i_584 = 0; i_584 < sizeB_584; i_584++) {
        C_584[sizeA_584 + i_584] = B_584[i_584];
    }

    for (i_584 = 0; i_584 < sizeC_584 - 1; i_584++) {
        for (y_584 = i_584 + 1; y_584 < sizeC_584; y_584++) {
            if (C_584[y_584] < C_584[i_584]) { 
                int move = C_584[y_584];
                C_584[y_584] = C_584[i_584];
                C_584[i_584] = move;
            }
        }
    }

    for (i_584 = 0; i_584 < sizeC_584; i_584++) {
        cout << C_584[i_584] << '\n';
    }
}

int main() {
    int A_584[] = {0, 2, 5};
    int B_584[] = {2, 8, 4, 5};
    

    int sizeA_584 = sizeof(A_584) / sizeof(A_584[0]);
    int sizeB_584 = sizeof(B_584) / sizeof(B_584[0]);
    int sizeC_584 = sizeA_584 + sizeB_584;
    int C_584[sizeC_584]; 

    order(A_584, B_584,C_584, sizeA_584, sizeB_584,sizeC_584);

    return 0;
}
