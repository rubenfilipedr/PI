#include <stdio.h>

int diffval(int a, int b, int c){
  if(a == b && b == c){
    return 1;
  }
  if(a == b || a == c || b == c){
    return 2;
  }
  return 3;
}

int main(void){
  int v1, v2, v3;

  printf("First value: ");
  scanf("%d", &v1);
  printf("Second value: ");
  scanf("%d", &v2);
  printf("Third value: ");
  scanf("%d", &v3);

  printf("%d different value(s)\n", diffval(v1,v2,v3));
  return 0;
}
