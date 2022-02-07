#include <stdio.h>
#include <ctype.h>

int main(void){
  int ch, chars[26] = {0};

  while((ch = getchar()) != '\n'){
    if(isalpha(ch)){
      ch = toupper(ch);
      ch = ch - 'A';
      chars[ch]++;
    }
  }
  for(int i = 0; i <= 25; i++){
    printf("%c: %d\t", i+65,chars[i]);
  }
  putchar('\n');
  return 0;
}
