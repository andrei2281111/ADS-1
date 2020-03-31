int binary_search_r(int* arr, int value, int size) {
    int i = 0;
    int resalt = -1;
    int left = 0;
    int side = 0;
    int right = size;
    while (left <= right) {
        i = (left + right) / 2;
        if (arr[i] == value) resalt = i;
        if (side == 0) {
            if (arr[i] > value) right = i - 1;
            else left = i + 1;
        }
        else {
            if (arr[i] < value) left = i + 1;
            else right = i - 1;
        }
    }
    return resalt;
}

int binary_search_l(int* arr, int value, int size) {
    int i = 0;
    int resalt = -1;
    int left = 0;
    int side = 1;
    int right = size;
    while (left <= right) {
        i = (left + right) / 2;
        if (arr[i] == value) resalt = i;
        if (side == 0) {
            if (arr[i] > value) right = i - 1;
            else left = i + 1;
        }
        else {
            if (arr[i] < value) left = i + 1;
            else right = i - 1;
        }
    }
    return resalt;
}

int cbinsearch(int* arr, int size, int value)
{
    int numder_r = 0;
    int numder_l = 0;
    int resalt = 0;
    numder_r = binary_search_r(arr, value, size - 1);
    numder_l = binary_search_l(arr, value, size - 1);
    resalt = numder_r - numder_l + 1;
    return resalt;
}
