int cbinsearch(int *arr, int size, int value)
{
    int res=0, middle, low = 0, high = size-1, step;
    
    while (low<=high) {
        middle = (low+high)/2;
        
        if (value == arr[middle]) {
            res++;
            step=middle;
            while (step>0) {
                if (arr[step-1]!=value)
                break;
                else {
                    res++;
                    step--;
                }
            }
            step=middle;
            while (step<size-1) {
                if (arr[step+1]!=value)
                break;
                else {
                    res++;
                    step++;
                }
            }
            return res;
        }
        else if (value<arr[middle])
        high = middle -1;
        else 
        low = middle + 1;
    }
    
    return res;
}
