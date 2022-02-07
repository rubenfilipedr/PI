#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int num, x, guesses = 0;

  srand((unsigned)time(NULL));
  x = 1 + rand() / (RAND_MAX / 1000 + 1);

  printf("Guess the number between 1-1000\n");
  scanf("%d", &num);
  while(num != x){
    guesses++;
    if(x > num){
      printf("Too low! Try again.\n");
    }
    else{
      printf("Too high! Try again.\n");
    }
    scanf("%d", &num);
  }
  printf("You guessed correctly in %d tries.\n", guesses+1);
  return 0;
}
