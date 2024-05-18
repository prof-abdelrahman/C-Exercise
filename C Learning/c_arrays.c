#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50, 75, 100};
    printf("%d\n", myNumbers[0]);
    // Outputs 25

    myNumbers[0] = 33;
    printf("\n%d\n\n", myNumbers[0]);
    // Now outputs 33 instead of 25

    for (int i = 0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
        }

    // Array of arrays
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
    printf("\n%d\n\n", matrix[0][2]);  // Outputs 2

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\n", matrix[i][j]);
        }
        }
  
  return 0;
}