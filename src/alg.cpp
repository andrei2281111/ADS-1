int cbinsearch(int *arr, int size, int value)
{
    int left = 0, right = size - 1, center , amountElements = 0, c = 0;
    while (left <= right)
        {
            center = (left + right) / 2; 
            if (arr[center] == value) c     = center; 
            if (arr[center] > value)  right = center - 1; 
            else                      left  = center + 1; 
        }
        while (arr[c] == value)
        {
            amountElements++; 
            c--; 
        }
    return amountElements;
}
