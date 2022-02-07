#include <stdio.h>
#include <ctype.h>

int scrabble(int ch){
  switch(ch){
    case 'A':
    case 'E':
    case 'I':
    case 'L':
    case 'N':
    case 'O':
    case 'R':
    case 'T':
    case 'S':
    case 'U': return 1;
    case 'D':
    case 'G': return 2;
    case 'B':
    case 'C':
    case 'M':
    case 'P': return 3;
    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y': return 4;
    case 'K': return 5;
    case 'J':
    case 'X': return 8;
    case 'Q':
    case 'Z': return 10;
    default : return 0;
  }
}

int main(void){
  int ch, sum = 0;

  while((ch = getchar()) != '\n'){
    sum += scrabble(toupper(ch));
  }
  printf("%d\n", sum);
  return 0;
}
