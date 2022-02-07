int is_prime(int n){
  if(n <= 1){
    return 0;
  }
  for(long i = 2; i * i <= n; i++){
    if(n % i == 0){
      return 0;
    }
  }
  return 1;
}

int contar_primos(int a, int b){
  int sum = 0;
  if(a > b){
    for(int i = b; i <= a; i++){
      if(is_prime(i)){
        sum++;
      }
    }
  }
  else{
    for(int j = a; j <= b; j++){
      if(is_prime(j)){
        sum++;
      }
    }
  }
  return sum;
}
