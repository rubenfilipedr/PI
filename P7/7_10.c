#include <stdio.h>

int filtrar_positivos(int vec[], int size){
  int k = 0;
  for(int i = 0; i < size; i++){
    if(vec[i] > 0){
      vec[k++] = vec[i];
    }
  }
  return k;
}

int main(void){
  int s, v[8] = {2, 7, -1, 0, 13, 5, -3, 2};

  s = filtrar_positivos(v,8);
  printf("%d\n", s);
  for(int i = 0; i < s; i++){
    printf("%d ", v[i]);
  }
  putchar('\n');
  return 0;
}
