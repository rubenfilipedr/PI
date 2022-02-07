#include <stdio.h>

int main(void){
  int v, max = 0;

  do{
    printf("Introduza valor: ");
    scanf("%d", &v);
    if(v > max){
      max = v;
    }
  }while(v != 0);
  printf("Max: %d\n", max);
  return 0;
}
