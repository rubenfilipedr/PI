#include <stdio.h>

int main(void){
  int n, d = 2;
  printf("Numero inteiro: ");
  scanf("%d", &n);
  printf("%d : ", n);

  while(n != 0){
    if(n % d != 0){
      d++;
    }
    else{
      n /= d;
      printf("%d ", d);
      if(n == 1){
        break;
      }
    }
  }
  printf("\n");
  return 0;
}
