#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STUDENTS 25
#define EXPERIMENTS 10000

int repetidos(int vec[], int size){
  for(int i = 0; i < size; i++){
    for(int j = i+1; j < size; j++){
      if(vec[i] == vec[j]){
        return 1;
      }
    }
  }
  return 0;
}

int experiment(int vec[], int size){
  for(int i = 0; i <= size - 1; i++){
    vec[i] = 1 + rand() / (RAND_MAX / 365 + 1);
  }
  return repetidos(vec,size);
}

int main(void){
  int bdays[STUDENTS];
  float exp1 = 0, exptotal = 0;

  srand((unsigned)time(NULL));
  for(int i = 1; i <= EXPERIMENTS; i++){
    if(experiment(bdays,STUDENTS)){
      exp1++;
    }
    exptotal++;
  }
  printf("P = %.0f/%.0f = %f\n", exp1,exptotal,exp1/exptotal);
  return 0;
}
