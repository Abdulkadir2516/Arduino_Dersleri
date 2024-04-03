#include <stdio.h>

int main() {
    char myText[] = "Hello";
    printf("%s", myText);


    double myNum = 19.984589;
    printf("%.2lf", myNum);

    float f1 = 44000e-2;
    double d1 = 12E4;

    printf("%f\n", f1);
    printf("%lf", d1);

    float myFloatNum = 3.5;

    printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f", myFloatNum);   // Only show 4 digits 

  return 0;
}