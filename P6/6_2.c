#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QUESTIONS 10

int randnum(void){
  return 1 + rand() / (RAND_MAX / 9 + 1);
}

int main(void){
  int x, y, z, answers1 = 0, answers0 = 0;

  srand((unsigned)time(NULL));
  for(int i = 1; i <= QUESTIONS; i++){
    x = randnum();
    y = randnum();
    printf("%dx%d=", x,y);
    scanf("%d", &z);
    if(x * y == z){
      answers1++;
      printf("Correct!\n\n");
    }
    else{
      answers0++;
      printf("Incorrect. %dx%d=%d\n\n", x,y,x*y);
    }
  }
  printf("%d correct answer(s). %d incorrect answer(s).\n", answers1,answers0);
  return 0;
}
