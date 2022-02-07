#include <stdio.h>

int montanhas(char str[]){
  int height = 0, prevheight = 0, sum = 0;
  
  for(int i = 0; str[i] != '\0'; i++){
    if(str[i] == 'S'){
      height++;
    }
    else{
      height--;
    }
    if(height == 0 && prevheight == 1){
      sum++;
    }
    prevheight = height;
  }
  return sum;
}

int main(void){
  char s[] = "SSDSDDSDDDDSS";
  printf("%d\n", montanhas(s));
  return 0;
}
