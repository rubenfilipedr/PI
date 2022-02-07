#include <stdio.h>

int main(void){
  float v;

  printf("Valor sem IVA: ");
  scanf("%f", &v);

  printf("Valor com IVA: %.2f\n", v * 1.23);
  return 0;
}
