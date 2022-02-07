#include <stdio.h>

int main(void){
  int eur;

  printf("Quantia em EUR: ");
  scanf("%d", &eur);

  printf("Notas EUR 20: %d\n", eur / 20);
  eur %= 20;
  printf("Notas EUR 10: %d\n", eur / 10);
  eur %= 10;
  printf("Notas EUR  5: %d\n", eur / 5);
  eur %= 5;
  printf("Moedas EUR 1: %d\n", eur);

  return 0;
}
