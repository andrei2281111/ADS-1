int cbinsearch(int* arr, int size, int value)
{
	int kol = 0;
	int left = 0, right = size;
	int mid = (left + right) / 2;
	while (left <= right)
	{
		if (arr[mid] == value)
		{
			kol++;
			break;
		}
		if (arr[mid] < value)
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
		if (arr[mid] > value)
		{
			right = mid - 1;
			mid = (left + right) / 2;
		}
	}
	int transfer = 1;
	while ((mid - transfer >= 0) && (arr[mid - transfer] == value))
	{
		kol++;
		transfer++;
	}
	transfer = 1;
	while ((mid + transfer <= size) && (arr[mid + transfer] == value))
	{
		kol++;
		transfer++;
	}
	return kol;
}
