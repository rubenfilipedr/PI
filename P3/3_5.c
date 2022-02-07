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

  printf("First value: ");
  scanf("%d", &v1);
  printf("Second value: ");
  scanf("%d", &v2);
  printf("Third value: ");
  scanf("%d", &v3);

  printf("Max value: %d\n", maxval(v1,v2,v3));
  printf("Min value: %d\n", minval(v1,v2,v3));
  printf("Amplitude: %d\n", maxval(v1,v2,v3) - minval(v1,v2,v3));

  return 0;
}
