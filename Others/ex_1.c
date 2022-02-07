#include <stdio.h>
#include <ctype.h>

char rodar_letra(char ch){
  if(!(isalpha(ch))){
    return ch;
  }
  else if(isupper(ch)){
    ch = ch - 'A';
    ch = (ch + 1) % 26;
    ch = ch + 'A';
  }
  else{
    ch = ch - 'a';
    ch = (ch + 1) % 26;
    ch = ch + 'a';
  }
  return ch;
}

int main(void){
  char ch1 = 'f', ch2 = 'z';
  printf("%c\n%c\n", rodar_letra(ch1),rodar_letra(ch2));
  return 0;
}
