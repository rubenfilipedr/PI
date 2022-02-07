#include <stdio.h>

void sort_desc(int vec[], int n){
  int i, j;
  for(i = 1; i < n; i++){
    int x = vec[i];
    j = i - 1;
    while(j >= 0 && vec[j] < x){
      vec[j+1] = vec[j];
      j--;
    }
    vec[j+1] = x;
  }
}

int main(void){
  int v[6] = {5, 3, 13, 7, 1, 0};

  sort_desc(v,6);
  for(int i = 0; i < 6; i++){
    printf("%d ", v[i]);
  }
  putchar('\n');
  return 0;
}
