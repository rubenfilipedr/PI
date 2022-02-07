#include <stdio.h>

int bissexto(int n){
  if(n % 400 == 0){
    return 1;
  }
  else if(n % 100 == 0){
    return 0;
  }
  else if(n % 4 == 0){
    return 1;
  }
  else{
    return 0;
  }
}

int main(void){
  int year;
  printf("Enter year: ");
  scanf("%d", &year);
  printf("%d\n", bissexto(year));
  return 0;
}
