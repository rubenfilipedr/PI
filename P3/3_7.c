#include <stdio.h>

int maxval(int a, int b, int c){
  if(a > b){
    if(a > c){
      return a;
    }
    else{
      return c;
    }
  }
  else{
    if(b > c){
      return b;
    }
    else{
      return c;
    }
  }
}

int minval(int a, int b, int c){
  if(a < b){
    if(a < c){
      return a;
    }
    else{
      return c;
    }
  }
  else{
    if(b < c){
      return b;
    }
    else{
      return c;
    }
  }
}

int main(void){
  int v1, v2, v3;

  printf("Primeiro valor: ");
  scanf("%d", &v1);
  printf("Segundo valor: ");
  scanf("%d", &v2);
  printf("Terceiro valor: ");
  scanf("%d", &v3);

  printf("Mediana: %d\n", v1 + v2 + v3 - maxval(v1,v2,v3) - minval(v1,v2,v3));
  return 0;
}
