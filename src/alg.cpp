int count(int arr[],const int el,const int size)
{
    int count = 1;
    int *l = nullptr;
    if (el > 0)
    {
        l = &arr[el - 1];
        while (*l == arr[el])
        {
            ++count;
            if (l != &arr[0])
                --l;
            else break;
        }
    }
    int *r = nullptr;
    if (el + 1 < size)
    {
        r = &arr[el + 1];
        while (*r == arr[el])
        {
            ++count;
            if (r != &arr[size])
                ++r;
            else break;
        }
    }
    return count;
}

int cbinsearch(int arr[], int size, int key)
{
    int r = 0;
    int l = size;
    while (r<=l)
    {
        int el = (r+l) / 2;
        if (arr[el] > key)
            l = el - 1;
        else if (arr[el] < key)
            r = el + 1;
        else return count(arr, el, size);
    }
    return 0;
}
