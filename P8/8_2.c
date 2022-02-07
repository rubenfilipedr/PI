#include <stdio.h>

int ordenada(int vec[], int size){
  for(int i = 1; i < size; i++){
    if(vec[i-1] > vec[i]){
      return 0;
    }
  }
  return 1;
}

int main(void){
  int v[5] = {1, 3, 2, 5, 6};
  printf("%d\n", ordenada(v,5));
  return 0;
}
