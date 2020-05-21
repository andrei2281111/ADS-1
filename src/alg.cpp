int cbinsearch(int *arr, int size, int value)
{
    int n=0,k=0;
    int left = 0;
    int right = size-1;
    while (left <= right)
      {
            int mid = (left + right) / 2;
            if (value == arr[mid])
                {
                  n++;
                  k=mid;
                }
            if (arr[mid] < value)
                {left = mid + 1;}
            else {right = mid - 1;}
      }
 if (n>0)
  {
      n=0;
      while(arr[k]==value)
      {
          n++;
          k++;
      }
  } 
return n;
}
