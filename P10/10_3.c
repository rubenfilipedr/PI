#include <stdio.h>

void decompor(int total_seg, int *horas, int *mins, int *segs){
  *horas = total_seg / 3600;
  total_seg %= 3600;
  *mins = total_seg / 60;
  total_seg %= 60;
  *segs = total_seg;
}

int main(void){
  int t = 7322, h, m, s;
  decompor(t,&h,&m,&s);
  printf("%d:%d:%d\n", h,m,s);
  return 0;
}
