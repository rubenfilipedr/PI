#include <stdio.h>
#include <stdlib.h>

int main(void){
  double value;

  for(int i = 1; i <= 100; i++){
    value = (double)rand() / ((double)RAND_MAX + 1);
    printf("%f ", value);
  }
  printf("\n");

  return 0;
}
