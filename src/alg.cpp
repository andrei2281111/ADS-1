int cbinsearch(int *arr, int size, int value)
{
    int n=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==value)
        n++;
    }
    return n;
}
