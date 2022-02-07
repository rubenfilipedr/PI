#include <stdio.h>

int ocorre(int vec[], int size, int val){
  for(int i = 0; i < size; i++){
    if(vec[i] == val){
      return 1;
    }
  }
  return 0;
}

int main(void){
  int values[100] = {0};
  int x, i = 0;

  do{
    printf("Enter a value: ");
    scanf("%d", &x);
    if(!(ocorre(values,100,x))){
      values[i] = x;
      i++;
    }
  }while(x != -1);

  for(int j = 0; j < i - 1; j++){
    printf("%d ", values[j]);
  }
  printf("\n");
  return 0;
}
