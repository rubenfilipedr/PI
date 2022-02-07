#include <stdio.h>

int segundo_menor(int vec[], int size){
  int i, j;
  for(i = 0; i < 2; i++){
    int imin = i;
    for(j = i+1; j < size; j++){
      if(vec[j] < vec[imin]){
        imin = j;
      }
    }
    if(imin != i){
      int temp = vec[i];
      vec[i] = vec[imin];
      vec[imin] = temp;
    }
  }
  return vec[1];
}

int main(void){
  int v[6] = {13, 5, 1, 2, 7, 9};
  printf("%d\n", segundo_menor(v,6));
  return 0;
}
