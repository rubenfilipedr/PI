#include <stdio.h>
#include <ctype.h>
#include <string.h>

int partition(char vec[], int l, int u){
  int i, m;
  char temp;
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

void quicksort_rec(char vec[], int l, int u){
  int m;
  if(l >= u){
    return;
  }
  m = partition(vec,l,u);
  quicksort_rec(vec,l,m-1);
  quicksort_rec(vec,m+1,u);
}

void ordenar(char str[]){
  int s = strlen(str) - 1;
  for(int i = 0; i <= s; i++){
    str[i] = toupper(str[i]);
  }
  quicksort_rec(str,0,s);
}

int main(void){
  char s[] = "Algoritmo";
  ordenar(s);
  printf("%s\n", s);
  return 0;
}
