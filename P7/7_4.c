#include <stdio.h>
#include <ctype.h>

int algum_digito(char str[]){
  for(int i = 0; str[i] != '\0'; i++){
    if(isdigit(str[i])){
      return 1;
    }
  }
  return 0;
}

int main(void){
  char s[] = "Hello17World";
  printf("%d\n", algum_digito(s));
  return 0;
}
