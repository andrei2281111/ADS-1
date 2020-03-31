int cbinsearch(int *arr, int size, int value)
{
  int q=0, i=0, left = 0;
  int right = size-1;
  while (left <= right)
  {
    int mid = (left + right) / 2;
    if (value == arr[mid])
    {
      q++;
      i=mid;
    }
    if (arr[mid] < value) {left = mid + 1;}
    else {right = mid - 1;}
  } 
  if (q>0)
  {
    q=0;
    while(arr[i]==value)
    {
      q++;
      i++;
    }
  }
  return q;
}
