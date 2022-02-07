#include <stdio.h>
#include <ctype.h>

int main(void){
  int ch, l = 0;

  while((ch = getchar()) != '\n'){
    if(isalpha(ch)){
      l++;
    }
  }
  printf("%d letter(s)\n", l);

  return 0;
}
