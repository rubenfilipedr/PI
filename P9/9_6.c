#include <stdio.h>

#define N 3

int soma_diagonal1(int mat[N][N]){
  int sum = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(i == j){
        sum += mat[i][j];
      }
    }
  }
  return sum;
}

int soma_diagonal2(int mat[N][N]){
  int sum = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(i + j == N - 1){
        sum += mat[i][j];
      }
    }
  }
  return sum;
}

int main(void){
  int m[N][N] = { {1, 2, 3}, {2, 1, 3}, {4, 1, 1} };
  printf("%d\n", soma_diagonal1(m));
  printf("%d\n", soma_diagonal2(m));
  return 0;
}
