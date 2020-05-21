int cbinsearch(int *arr, int size, int value)
{
    int l = 0;
    int r = size-1;
    int mid,tmp=0;
    int x1 = 0;
   while (l <= r){
            mid = (l+r)/2; 
            if (arr[mid] == value) x1 = mid; 
            if (arr[mid] > value) r = mid - 1; 
            else l = mid + 1; 
        }
        while (arr[x1] == value)
        {
            tmp++; 
            x1--; 
        }
    return tmp;
}
