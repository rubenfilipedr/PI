#include <stdio.h>

int calc(char str[]){
  switch(str[1]){
    case '+': return (str[0] - '0') + (str[2] - '0');
    case '-': return (str[0] - '0') - (str[2] - '0');
    case '*': return (str[0] - '0') * (str[2] - '0');
    case '/': return (str[0] - '0') / (str[2] - '0');
    case '%': return (str[0] - '0') % (str[2] - '0');
    default: return 0;
  }
}

int main(void){
  char s[] = "2*3";
  printf("%d\n", calc(s));
  return 0;
}
