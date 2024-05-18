#include <stdio.h>

int main() {
    float myFloatNum = 3.5;
    double myDoubleNum = 19.99;

    printf("%f\n", myFloatNum); // Outputs 3.500000
    printf("%lf\n", myDoubleNum); // Outputs 19.990000
    printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f\n", myFloatNum);   // Only show 4 digits

    int x = 5;
    int y = 2;
    int sum = 5 / 2;
    printf("%d\n", sum); // Outputs 2

    float summ = 5 / 2;
    printf("%f\n", summ);  // 2.000000

    // Manual conversion: int to float
    float summm = (float) 5 / 2;
    printf("%f\n", summm); // 2.500000

    int num1 = 5;
    int num2 = 2;
    float ssum = (float) num1 / num2;

    printf("%f\n", ssum); // 2.500000
    printf("%.1f", ssum); // 2.5

    return 0;

}