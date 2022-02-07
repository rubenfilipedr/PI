#include <stdio.h>
#include <math.h>

// #define PI 3.14159265359

int main(void){
  float v, r;

  printf("Insert r: ");
  scanf("%f", &r);
  v = 4.0 / 3.0 * M_PI * r * r * r;

  printf("Volume: %.2f\n", v);
  return 0;
}
