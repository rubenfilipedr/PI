#include <stdio.h>

void select_sort_desc(int vec[], int n){
  int i, j;
  for(i = 0; i < n; i++){
    int imin = i;
    for(j = i+1; j < n; j++){
      if(vec[j] > vec[imin]){
        imin = j;
      }
    }
    if(imin != i){
      int temp = vec[i];
      vec[i] = vec[imin];
      vec[imin] = temp;
    }
  }
}

int main(void){
  int v[6] = {5, 3, 13, 7, 1, 0};

  select_sort_desc(v,6);
  for(int i = 0; i < 6; i++){
    printf("%d ", v[i]);
  }
  putchar('\n');
  return 0;
}
