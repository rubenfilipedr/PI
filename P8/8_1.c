#include <stdio.h>

void eliminar(char str[], char ch){
  int i = 0;
  while((str[i] != ch) && (str[i] != '\0')){
    i++;
  }
  while(str[i] != '\0'){
    str[i] = str[i+1];
    i++;
  }
}

int main(void){
  char s[] = "Banana";
  eliminar(s,'n');
  printf("%s\n", s);
  return 0;
}
