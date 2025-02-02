#include <iostream>
using namespace std;

void order(int A[], int B[],int C[], int sizeA, int sizeB,int sizeC) {

    int i, y;

    for (i = 0; i < sizeA; i++) {
        C[i] = A[i];
    }

   
    for (i = 0; i < sizeB; i++) {
        C[sizeA + i] = B[i];
    }

    for (i = 0; i < sizeC - 1; i++) {
        for (y = i + 1; y < sizeC; y++) {
            if (C[y] < C[i]) { 
                int move = C[y];
                C[y] = C[i];
                C[i] = move;
            }
        }
    }

    for (i = 0; i < sizeC; i++) {
        cout << C[i] << '\n';
    }
}

int main() {
    int A[] = {0, 2, 5};
    int B[] = {2, 8, 4, 5};
    

    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    int sizeC = sizeA + sizeB;
    int C[sizeC]; 

    order(A, B,C, sizeA, sizeB,sizeC);

    return 0;
}
