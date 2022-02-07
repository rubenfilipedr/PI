#include <stdio.h>
#include <ctype.h>

int todos_letras(char str[]){
  for(int i = 0; str[i] != '\0'; i++){
    if(!(isalpha(str[i]))){
      return 0;
    }
  }
  return 1;
}

int main(void){
  char s[] = "HelloWorld";
  printf("%d\n", todos_letras(s));
  return 0;
}
