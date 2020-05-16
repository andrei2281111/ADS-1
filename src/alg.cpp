int cbinsearch(int *arr, int size, int value){
  int first = 0;
  int last = size - 1;
  int search = 0;
  while(first <= last){
  int middle = first + (last-first)/2;
    if(arr[middle] == value){
    search++;
      for(int i = 1; arr[middle + i] == value; i++){
      search++;
      }
      for(int j = 1; arr[middle - j] == value; j++){
        search++;
      }
      return search;
    }
    if(arr[middle] < value){
      first = middle + 1;
      else last = middle - 1;
    }
  }
return search;
}
