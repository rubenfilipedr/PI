int mediana(int a, int b, int c){
  int max, min;
  //calc max
  if(a > b){
    if(a > c){
      max = a;
    }
    else{
      max = c;
    }
  }
  else{
    if(b > c){
      max = b;
    }
    else{
      max = c;
    }
  }
  //calc min
  if(a < b){
    if(a < c){
      min = a;
    }
    else{
      min = c;
    }
  }
  else{
    if(b < c){
      min = b;
    }
    else{
      min = c;
    }
  }
  //mediana == todos - max e min
  return a + b + c - max - min;
}
