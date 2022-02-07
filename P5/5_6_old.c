#include <stdio.h>
#include <ctype.h>

int main(void){
  int ch, space = 0;

  while((ch = getchar()) != EOF){
    if(space){
      ch = toupper(ch);
      space = 0;
    }
    if(ch == ' '){
      space = 1;
    }
    putchar(ch);
  }
  printf("\n");
  return 0;
}
