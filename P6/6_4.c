#include <stdio.h>

void range(int vec[], unsigned size, int inicio, int incr){
  for(int i = 0; i < size; i++){
    vec[i] = inicio + incr * i;
  }
  return;
}

int main(void){
  int a[5];
  range(a,5,3,2);
  for(int i = 0; i < 5; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}
