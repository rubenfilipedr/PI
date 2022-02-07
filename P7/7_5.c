#include <stdio.h>
#include <ctype.h>
#include <string.h>

int forte(char str[]){
  int lower = 0, upper = 0, digit = 0;
  if(strlen(str) < 6){
    return 0;
  }
  for(int i = 0; str[i] != '\0'; i++){
    if(islower(str[i])){
      lower++;
    }
    if(isupper(str[i])){
      upper++;
    }
    if(isdigit(str[i])){
      digit++;
    }
  }
  if(lower == 0 || upper == 0 || digit == 0){
    return 0;
  }
  return 1;
}

int main(void){
  char s[] = "abr4cAdaBra";
  printf("%d\n", forte(s));
  return 0;
}
