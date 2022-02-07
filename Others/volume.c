#include <stdio.h>

int main(void){
  float l, w, h, v;

  printf("L= "); scanf("%f", &l);
  printf("W= "); scanf("%f", &w);
  printf("H= "); scanf("%f", &h);
  v = l * w * h; // calculo do volume

  printf("LxWxH: %.0f*%.0f*%.0f (cm)\n", l,w,h);
  printf("Volume: %.0f (cm^3)\n", v);
  return 0;
}
