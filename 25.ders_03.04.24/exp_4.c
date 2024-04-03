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

  return 0;
}