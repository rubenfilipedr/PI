void max_min(int vec[], int size, int *pmax, int *pmin){
  *pmax = vec[0];
  *pmin = vec[0];
  for(int i = 1; i < size; i++){
    if(*pmax < vec[i]){
      *pmax = vec[i];
    }
    if(*pmin > vec[i]){
      *pmin = vec[i];
    }
  }
}
