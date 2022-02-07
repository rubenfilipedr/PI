#include <stdio.h>

float comissao(float v){
  if(v < 2500.0){
    v = 30.0 + 0.017 * v;
  }
  else if(v < 6250.0){
    v = 56.0 + 0.0066 * v;
  }
  else if(v < 20e3){
    v = 76.0 + 0.0034 * v;
  }
  else if(v < 50e3){
    v = 100.0 + 0.0022 * v;
  }
  else if(v < 500e3){
    v = 155.0 + 0.0011 * v;
  }
  else{
    v = 255.0 + 0.0009 * v;
  }

  if(v < 39.0){
    v = 39.0;
  }

  return v;
}

int main(void){
  float v;

  do{
    printf("\nIntroduza o valor: EUR ");
    scanf("%f", &v);
    if(v != 0){
      printf("Comissao: EUR %.2f\n", comissao(v));
    }
    else{
      printf("Comissao: EUR 0.00\n");
    }
  }while(v != 0);
  
  return 0;
}
