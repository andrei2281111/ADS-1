int cbinsearch( int* arr, int size, int value )
 {
	int count = 0, n = 0;
	int left = 0;
	int right = size - 1;

	
	while (left <= right) {
		int mid = (left + right) / 2;
		
		if (arr[mid] == value) {
		 n = mid;
		 int a = n - 1;
		 while (arr[n] == value) { count++; n++; }
		 while (arr[a] == value) { count++; a--; }
		 return count;
		}
		
		else if (arr[mid] < value)
			left = mid + 1;
		
		else if (arr[mid] > value)
			right = mid - 1;
	}
	return 0;
}
