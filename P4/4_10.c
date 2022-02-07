#include <stdio.h>

int main(void){
  float a, x;
  printf("Enter a: ");
  scanf("%f", &a);

  x = a / 2;
  printf("%f\n", x);
  for(int i = 2; i <= 10; i++){
    x = (x + (a / x)) / 2.0;
    printf("%f\n", x);
  }
  
  return 0;
}
