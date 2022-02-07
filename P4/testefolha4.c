#include <stdio.h>

int main(void){
  int n = 9384;
  do{
    printf("%d\n", n);
    n /= 10;
  }while(n > 0);
  printf("\n");
  return 0;
}
