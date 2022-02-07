#include <stdio.h>

int main(void){
  int i = 7, j = 8, k = 9;
  printf("%d\n", i - 7 && j++ < k);
  printf("%d %d %d\n", i,j,k);
  return 0;
}
