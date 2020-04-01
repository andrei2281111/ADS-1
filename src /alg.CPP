int cbinsearch(int *arr, int size, int value)
{
 int left = 0;
 int right = size-1;
 int i = 0;
 int x = 0;
 while (left <= right)
 {
    int mid = (left + right) / 2;
    if (value == arr[mid])
    {
      i++;
      x = mid;
    }
    if (arr[mid] < value) 
    {
      left = mid + 1;
    }
    else 
    {
      right = mid - 1;
    }
 } 
 if (i > 0)
 {
    i = 0;
    while(arr[x]==value)
    {
      i++;
      x++;
    }
 }
  return i;
}
