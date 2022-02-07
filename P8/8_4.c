#include <stdio.h>

void select_sort(int vec[], int n){
  int i, j;
  for(i = 0; i < n; i++){
    int imin = i;
    for(j = i+1; j < n; j++){
      if(vec[j] < vec[imin]){
        imin = j;
      }
    }
    if(imin != i){
      int temp = vec[i];
      vec[i] = vec[imin];
      vec[imin] = temp;
    }
  }
}

void insert_sort(int vec[], int n){
  int i, j;
  for(i = 1; i < n; i++){
    int x = vec[i];
    j = i - 1;
    while(j >= 0 && vec[j] > x){
      vec[j+1] = vec[j];
      j--;
    }
    vec[j+1] = x;
  }
}

int main(void){
  int i = 0, vec[1000];

  do{
    printf("Enter value: ");
    scanf("%d", &vec[i]);
    i++;
  }while(vec[i-1] != 0);

  //select_sort(vec,i);
  insert_sort(vec,i);

  for(int j = 0; j < i; j++){
    printf("%d ", vec[j]);
  }
  putchar('\n');

  return 0;
}
