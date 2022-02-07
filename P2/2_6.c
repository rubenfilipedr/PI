#include <stdio.h>

int main(void){
  int n1, n2, d1, d2, r1, r2;

  printf("Primeiro numerador: ");
  scanf("%d", &n1);
  printf("Primeiro denominador: ");
  scanf("%d", &d1);
  printf("Segundo numerador: ");
  scanf("%d", &n2);
  printf("Segundo denominador: ");
  scanf("%d", &d2);

  r1 = n1 * d2 + n2 * d1;
  r2 = d1 * d2;

  printf("%d/%d + %d/%d = %d/%d\n", n1,d1,n2,d2,r1,r2);
  return 0;
}
