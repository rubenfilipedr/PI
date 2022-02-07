#include <stdio.h>

int score(char ch){
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

int scrabble(char str[]){
  int sum = 0;
  for(int i = 0; str[i] != '\0'; i++){
    sum += score(str[i]);
  }
  return sum;
}

int main(void){
  char s[] = "PITFALL";
  printf("%d\n", scrabble(s));
  return 0;
}
