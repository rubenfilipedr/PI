#include <stdio.h>

int main(void){
  float x;

  printf("Insert x: ");
  scanf("%f", &x);
  x = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("((((3x+2)x-5)x-1)x+7)x-6 = %f\n", x);
  return 0;
}
