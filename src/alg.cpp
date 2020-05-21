int cbinsearch (int *arr, int size, int value)
{
int a = 0;
int b = size-1;
int c = 0;
int d = 0;
     while (a <= b)
     {
        int middle = (a+b)/2;
          if (arr[middle] == value) 
            d=middle;
          if (arr[middle] > value)
            b = middle - 1;
          else
            a = middle + 1;
     }
     while (arr[d] == value)
     {
         c++;
         d--;
     }
     return c;
}
