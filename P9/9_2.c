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

int anagramas(char str1[], char str2[]){
  int s1 = strlen(str1) - 1;
  int s2 = strlen(str2) - 1;
  if(!(s1 == s2)){
    return 0;
  }
  for(int i = 0; i <= s1; i++){
    str1[i] = toupper(str1[i]);
  }
  for(int i = 0; i <= s2; i++){
    str2[i] = toupper(str2[i]);
  }
  quicksort_rec(str1,0,s1);
  quicksort_rec(str2,0,s2);

  for(int j = 0; str1[j] != '\0'; j++){
    if(str1[j] != str2[j]){
      return 0;
    }
  }
  return 1;
}

int main(void){
  char str1[] = "deposxt";
  char str2[] = "topside";
  printf("%d\n", anagramas(str1,str2));
  return 0;
}
