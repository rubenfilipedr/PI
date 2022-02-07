#include <stdio.h>

int desordem(int vec[], int size){
  int sum = 0;
  for(int i = 1; i < size; i++){
    if(vec[i-1] > vec[i]){
      sum++;
    }
  }
  return sum;
}

int main(void){
  int v[6] = {6, 5, 4, 3, 2, 1};
  printf("%d\n", desordem(v,6));
  return 0;
}
