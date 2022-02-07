#include <stdio.h>

void inicializa(int vec[], int size, int val){
  for(int i = 0; i < size; i++){
    vec[i] = val;
  }
  return;
}

int main(void){
  int a[5];
  inicializa(a,5,4);
  for(int i = 0; i < 5; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}
