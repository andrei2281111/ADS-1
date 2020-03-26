int cbinsearch(int *arr, int size, int value)
{
    int qty = 0;
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = (right + left) / 2;
        if (arr[mid] < value) left = mid + 1;
        else if (arr[mid] > value) right = mid - 1;
        else
        {
            qty++;
            for (int j = mid + 1; j < size && arr[j] == value; j++, qty++);
            for (int j = mid - 1; j >= 0 && arr[j] == value; j--, qty++);
            break;
        }
    }
    return qty;
}
