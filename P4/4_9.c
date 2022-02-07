#include <stdio.h>

void simp_frac(int n, int d){
  int a = n, b = d, r;
  while(b != 0){
    r = a % b;
    a = b;
    b = r;
  }
  printf("A fracao %d/%d e equivalente a %d/%d\n", n,d,n/a,d/a);
}

int main(void){
  int n, d;

  printf("Introduza numerador: ");
  scanf("%d", &n);
  printf("Introduza denominador: ");
  scanf("%d", &d);
  simp_frac(n,d);
  return 0;
}
