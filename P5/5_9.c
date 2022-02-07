#include <stdio.h>

double aprox_pi(int n){
  double sum = 0, y;
  for(int i = 0; i <= n; i++){
    if(i % 2 == 0){
      y = 1;
    }
    else{
      y = -1;
    }
    sum += y / ( 2 * i + 1 );
  }
  return sum * 4;
}

int main(void){
  int n;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("%lf\n", aprox_pi(n));
  return 0;
}
