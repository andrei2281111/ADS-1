int cbinsearch(int* mas, int size, int value) {

	int mid = 0;
	int pos = -1;
	int left = 0;
	int right = size - 1;
	while (left <= right) {
		mid = (left + right) / 2;
		if (mas[mid] == value) pos = mid;


		if (mas[mid] < value) left = mid + 1;
		else right = mid - 1;

	}


	mid = 0;
	int pos1 = -1;
	left = 0;
	right = size - 1;
	while (left <= right) {
		mid = (left + right) / 2;
		if (mas[mid] == value) pos1 = mid;

		if (mas[mid] > value) right = mid - 1;
		else left = mid + 1;

	}

	if ((pos1 == -1) && (pos == -1)) return 0; else
		return pos1 - pos + 1;
}
