int cbinsearch(int* arr, int size, int value)
{
	int i = 0;
	int j = size - 1;
	int kolvo = 0;
	while (i<j)
	{

		int mid = (i + j) / 2;

		if (arr[mid] == value)
		{
			do
			{
				kolvo++;
				++mid;
			} while (mid < size && arr[mid] == value);
			break;
		}


		else if (value < arr[mid])
			j = mid;
		else
			i = mid + 1;

	}

	return kolvo;
}
