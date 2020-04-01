int cbinsearch(int *arr, int size, int value) {

int low = 0;
int high = size - 1;
int count_value = 0;

while(low <= high) {

  int mid = (low + high)/2;
  if(value == arr[mid]) {
    count_value++;
    for(int l = mid-1, h = mid+1;;) {
      if(arr[l] == value && l >= 0) {
        count_value++;
        l--;
      } 
	  else if(arr[h] == value && h <= high) {
        count_value++;
        h++;
      } 
	  else break;
    }
    break;
  } 
  else if(value > arr[mid]) {
    low = mid + 1;
  } 
  else {
    high = mid - 1;
  }
}
return count_value;
}
