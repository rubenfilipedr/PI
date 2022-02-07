#include <stdio.h>

int prox_bissexto(int n){
  while(1){
    if(n % 400 == 0){
      return n;
    }
    else if(n % 100 == 0){
      n++;
    }
    else if(n % 4 == 0){
      return n;
    }
    else{
      n++;
    }
  }
}

int main(void){
  int year;
  printf("Enter year: ");
  scanf("%d", &year);
  printf("%d\n", prox_bissexto(year));
  return 0;
}
