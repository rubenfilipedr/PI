#include <stdio.h>

int mediana(int vec[], int a, int b, int c){
  int max, min;

  if(vec[a] > vec[b]){
    if(vec[a] > vec[c]){
      max = a;
    }
    else{
      max = c;
    }
  }
  else{
    if(vec[b] > vec[c]){
      max = b;
    }
    else{
      max = c;
    }
  }

  if(vec[a] < vec[b]){
    if(vec[a] < vec[c]){
      min = a;
    }
    else{
      min = c;
    }
  }
  else{
    if(vec[b] < vec[c]){
      min = b;
    }
    else{
      min = c;
    }
  }

  return a + b + c - max - min;
}

int partition(int vec[], int l, int u){
  int i, m, temp;

  int j = mediana(vec,l,u,(l+u)/2);
  temp = vec[l];
  vec[l] = vec[j];
  vec[j] = temp;

  m = l;
  for(i = l+1; i <= u; i++){
    if(vec[i] < vec[l]){
      m++;
      temp = vec[i];
      vec[i] = vec[m];
      vec[m] = temp;
    }
  }
  temp = vec[l];
  vec[l] = vec[m];
  vec[m] = temp;
  return m;
}

void quicksort_rec(int vec[], int l, int u){
  int m;
  if(l >= u){
    return;
  }
  m = partition(vec,l,u);
  quicksort_rec(vec,l,m-1);
  quicksort_rec(vec,m+1,u);
}

int main(void){
  int v[6] = {8, 5, 1, 13, 4, 1};
  quicksort_rec(v,0,5);
  for(int i = 0; i < 6; i++){
    printf("%d ", v[i]);
  }
  putchar('\n');
  return 0;
}
