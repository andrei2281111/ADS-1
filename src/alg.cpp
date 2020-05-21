int cbinsearch(int* arr, int size, int value)
{
	int i = 0;
	int j = size - 1;
	int quan = 0;
	int ind = 0;

	while (i <= j)
	{
		int mid = (i + j) / 2;
		if (arr[mid] == value)
			ind = mid;
		if (arr[mid] > value)
			j = mid - 1;
		else
			i = mid + 1;
	}

	while (arr[ind] == value)
	{
		quan++;
		ind--;
	}

	return quan;
}
