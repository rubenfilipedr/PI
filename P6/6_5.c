#include <stdio.h>

int ocorre(int vec[], int size, int val){
  for(int i = 0; i < size; i++){
    if(vec[i] == val){
      return 1;
    }
  }
  return 0;
}

int main(void){
  int a[5] = {1, 2, 7, 9, 13};
  printf("%d\n", ocorre(a,5,9));
  printf("%d\n", ocorre(a,5,5));
  return 0;
}
