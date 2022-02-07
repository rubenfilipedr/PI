#include <stdio.h>

int is_prime(int n){
  if(n <= 1){
    return 0;
  }
  for(long i = 2; i * i <= n; i++){
    if(n % i == 0){
      return 0;
    }
  }
  return 1;
}

int proximo_primo(int n){
  while(1){
    n++;
    if(is_prime(n)){
      return n;
    }
  }
}

int main(void){
  int n;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("Next prime: %d\n", proximo_primo(n));
  return 0;
}
