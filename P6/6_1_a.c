#include <stdio.h>
#include <stdlib.h>

int main(void){
  int value;

  for(int i = 1; i <= 100; i++){
    value = rand() / (RAND_MAX / 10 + 1);
    printf("%d ", value);
  }
  printf("\n");

  return 0;
}
