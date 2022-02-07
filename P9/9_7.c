int magico(int a[20][20], int n){
  int d1, d2, ls[20], cs[20], l, c, k;
  d1 = d2 = l = c = k = 0;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      l += a[i][j];
      c += a[j][i];
      if(i == j){
        d1 += a[i][j];
      }
      if(i + j == n - 1){
        d2 += a[i][j];
      }
    }
    ls[k] = l;
    cs[k] = c;
    k++;
    l = c = 0;
  }

  if(d1 != d2){
    return 0;
  }
  for(int h = 0; h < k; h++){
    if(d1 != ls[h] || d2 != ls[h] || d1 != cs[h] || d2 != cs[h]){
      return 0;
    }
    for(int g = 0; g < k; g++){
      if(ls[h] != ls[g] || cs[h] != cs[g] || ls[h] != cs[g]){
        return 0;
      }
    }
  }
  return 1;
}
