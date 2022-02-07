#include <stdio.h>

unsigned comprimento(char str[]){
  unsigned i = 0;
  while(str[i] != '\0'){
    i++;
  }
  return i;
}

int palindromo(char str[]){
  int i = 0, j;
  j = comprimento(str) - 1;

  while(i < j){
    if(str[i] != str[j]){
      return 0;
    }
    i++;
    j--;
  }
  return 1;
}

int main(void){
  char s[] = "abc1771cba";
  printf("%d\n", palindromo(s));
  return 0;
}
