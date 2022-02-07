#include <stdlib.h>

char *procurar(char *str, char ch){
  while(*str != '\0'){
    if(*str == ch){
      return str;
    }
    str++;
  }
  return NULL;
}
