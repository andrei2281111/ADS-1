int cbinsearch(int* arr, int size, int value) {
    int k = 0;
    int x1 = -1;
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        k = (left + right) / 2;
        if (arr[k] == value) x1 = k;
        if (arr[k] < value) left = k + 1;
            else right = k - 1;

    }
     k = 0;
    int x2 = -1;
     left = 0;
     right = size - 1;
    while (left <= right) {
        k = (left + right) / 2;
        if (arr[k] == value) x2 = k;
        if (arr[k] > value) right = k - 1;
            else left = k + 1;


    }
    if ((x1 == -1) && (x2 == -1)) {
        return 0;
    }
    else return(x2 - x1 + 1);
}
