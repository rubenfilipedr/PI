#include <stdio.h>

int main(void){
  int ch, space = 1, sum = 0;

  while((ch = getchar()) != EOF){
    if(ch == ' ' || ch == '\n' || ch == '\t'){
      space = 1;
    }
    if(ch != ' ' && ch != '\n' && ch != '\t'){
      if(space){
        sum++;
        space = 0;
      }
    }
  }
  printf("%d\n", sum);
  return 0;
}
