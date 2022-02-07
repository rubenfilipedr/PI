#include <stdio.h>

int contar_maiores(int vec[], int size, int val){
  int sum = 0;
  for(int i = 0; i <= size-1; i++){
    if(vec[i] > val){
      sum++;
    }
  }
  return sum;
}

int main(void){
  int v[6] = {13, 4, 7, 2, 22, 2};
  printf("%d\n", contar_maiores(v,6,5));
  return 0;
}
