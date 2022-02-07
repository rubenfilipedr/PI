#include <stdio.h>

int main(void){
  float v, i = 0, s = 0;

  do{
    printf("Introduza valor: ");
    scanf("%f", &v);
    if(v != 0){
      s += v;
      i++;
    }
  }while(v != 0);
  printf("Media: %.2f\n", s / i);
  return 0;
}
