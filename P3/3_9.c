#include <stdio.h>

int potencia(int x, int n){
  int r;
  if(n == 0){
    return 1;
  }
  else{
    r = x;
    for(int i = 2; i <= n; i++){
      r *= x;
    }
  }
  return r;
}

int main(void){
  printf("%d\n", potencia(3,4));

  return 0;
}
