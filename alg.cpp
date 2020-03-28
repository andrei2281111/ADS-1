int cbinsearch(int *arr, int size, int value)
{
	int schetchik=0;
	int mid = *arr + (size - *arr) / 2;

	if (*arr >= size)
        return -1;
	
	if (array[mid] == value)
	schetchik=+1;
        return mid;
	
	else if (array[mid] > value)
        return cbinsearch(*arr, mid, value);

    	else
        return cbinsearch(mid + 1, size, value);
}
