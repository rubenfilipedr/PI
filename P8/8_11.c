#include <stdio.h>
#include <assert.h>

int ordenada(int vec[], int size){
  for(int i = 1; i < size; i++){
    if(vec[i-1] > vec[i]){
      return 0;
    }
  }
  return 1;
}

void inserir(int vec[], int n, int x){
  assert(ordenada(vec,n));
  int j = n - 1;
  while(j >= 0 && vec[j] > x){
    vec[j+1] = vec[j];
    j--;
  }
  vec[j+1] = x;
  assert(ordenada(vec,n));
}

int main(void){
  int v[100] = {0, 1, 2, 4, 7};
  inserir(v,5,4);
  for(int i = 0; i < 6; i++){
    printf("%d ", v[i]);
  }
  putchar('\n');
  return 0;
}
