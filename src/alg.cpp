int cbinsearch(int* arr, int size, int value)
{
	int a=0;
	int b=size-1;
	int quantity=0;
	int index=0;

	while (a<=b) 
	{
		int mid=(a+b)/2;
		if (arr[mid]==value) 
			index=mid;
	    if (arr[mid]>value) 
			b=mid-1;
		else
			a=mid+1;
	}

	while(arr[index]==value)
	{
		quantity++;
		index--;
	}

	return quantity;
}
