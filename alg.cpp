int cbinsearch(int *arr, int size, int value)
{
	int l = 0, s = size, midle = 0, a = 0;
	while (a==0)
	{
		midle = (l + s ) / 2;
		if (arr[midle] > value)
			s = midle - 1;
		else if (arr[midle] < value)
			l = midle + 1;
		else 	a++;
	}
	if (a == 1)
	{
		int i = midle-1;
		while (arr[i] == value)
		{
			if (arr[i] == value)
			{
				i--;
				a++;
			}
		}
		i = midle + 1;
		while (arr[i] == value)
		{
			if (arr[i] == value)
			{
				i++;
				a++;
			}
		}
	}
	return a;
}
