#include <stdio.h>
#include <stdbool.h>  // Import the boolean header file

int main() {
  bool isProgrammingFun = false;
  bool isFishTasty = false;
  printf("%d\n", isProgrammingFun);  // Returns 1 (true)
  printf("%d\n", isFishTasty);         // Returns 0 (false)

    if (isProgrammingFun == true)
    {
    printf("programlama eglenceli\n");
    }
    else if(isFishTasty== true)
    {
    printf("balık lezzetli\n");
    }
    else{
    printf( "proglamlam eğlenceli değil  ve balık lezzetli deği" );
    }


  return 0;
}