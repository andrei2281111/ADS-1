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
        }
    }
    return count;
}

int cbinsearch(int arr[], int size, int key)
{
    int s = 0;
    int l = size;
    while (l >= 0 || s < size)
    {
        int el = (s + l) / 2;
        if (arr[el] > key)
            --l;
        else if (arr[el] < key)
            ++s;
        else return count(arr, el, size);
    }
}
