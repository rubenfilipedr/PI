#include <stdio.h>

int main(void){
  float l1, l2, l3;

  printf("Primeiro lado: ");
  scanf("%f", &l1);
  printf("Segundo lado: ");
  scanf("%f", &l2);
  printf("Terceiro lado: ");
  scanf("%f", &l3);

  if(l1 == l2 && l2 == l3){
    printf("Triangulo Equilatero\n");
  }
  else{
    if(l1 != l2 && l1 != l3 && l2 != l3){
      printf("Triangulo Escaleno\n");
    }
    else{
      printf("Triangulo Isosceles\n");
    }
  }
  
  return 0;
}
