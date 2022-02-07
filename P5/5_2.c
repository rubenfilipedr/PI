#include <stdio.h>

void mdc(int a, int b){
  int i = 1;
  printf("mdc(%d,%d) = ", a,b);
  while(a != b){
    if(a > b){
      i++;
      a -= b;
      printf("mdc(%d,%d)", a,b);
    }
    else{
      i++;
      b -= a;
      printf("mdc(%d,%d)", a,b);
    }
    printf(" = ");
  }
  printf("%d\n%d iterações\n", a,i);
}

int main(void){
  int a, b;
  printf("Introduza a: ");
  scanf("%d", &a);
  printf("Introduza b: ");
  scanf("%d", &b);

  mdc(a,b);
  return 0;
}
