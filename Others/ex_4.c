#include <stdio.h>

void bubblesort(int vec[], int n){
  int sw = 0, temp;
  for(int i = 1; i <= n-1; i++){
    if(vec[i-1] > vec[i]){
      temp = vec[i];
      vec[i] = vec[i-1];
      vec[i-1] = temp;
      sw = 1;
    }
  }
  if(sw){
    bubblesort(vec,n);
  }
}

int main(void){
  int a[5] = {5, 2, 13, 7, 1};
  bubblesort(a,5);
  for(int i = 0; i < 5; i++){
    printf("%d ", a[i]);
  }
  putchar('\n');
  return 0;
}
