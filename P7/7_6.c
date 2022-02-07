#include <stdio.h>

int decimal(char str[]){
  int value = 0;
  for(int i = 0; str[i] != '\0'; i++){
    value =  value * 10 + (str[i] - '0');
  }
  return value;
}

int main(void){
  char s[] = "57288";
  printf("%d\n", decimal(s));
  return 0;
}
