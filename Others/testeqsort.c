#include <stdio.h>

int partition(int vec[], int l, int u){
  int i, m, temp;
  m = l;
  for(i = l+1; i <= u; i++){
    if(vec[i] < vec[l]){
      m++;
      temp = vec[i];
      vec[i] = vec[m];
      vec[m] = temp;
    }
  }
  temp = vec[l];
  vec[l] = vec[m];
  vec[m] = temp;
  return m;
}

void quicksort_rec(int vec[], int l, int u){
  int m;
  if(l >= u){
    return;
  }
  m = partition(vec,l,u);
  quicksort_rec(vec,l,m-1);
  quicksort_rec(vec,m+1,u);
}

int main(void){
  int v[6] = {8, 5, 1, 13, 4, 1};
  quicksort_rec(v,0,5);
  for(int i = 0; i < 6; i++){
    printf("%d ", v[i]);
  }
  putchar('\n');
  return 0;
}
