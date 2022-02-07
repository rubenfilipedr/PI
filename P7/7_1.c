#include <stdio.h>
#include <ctype.h>

void capitalizar(char str[]){
  for(int i = 0; str[i] != '\0'; i++){
    str[i] = toupper(str[i]);
  }
  return;
}

int main(void){
  char s[] = "To be or not to be, that is the question.";
  capitalizar(s);
  printf("%s\n", s);
  return 0;
}
