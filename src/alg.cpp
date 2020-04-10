int cbinsearch(int *arr, int size, int value)
{
int res=0, low = 0, high = size-1;
int midlle, stp;

while (low<=high) {
midlle = (low+high)/2;

if (value == arr[midlle]) {
res++;
stp=midlle;
while (stp>0) {
if (arr[stp-1]!=value)
break;
else {
res++;
stp--;
}
}
stp=midlle;
while (stp<size-1) {
if (arr[stp+1]!=value)
break;
else {
res++;
stp++;
}
}
return res;
}
else if (value<arr[midlle])
high = midlle -1;
else
low = midlle + 1;
}

return res;
}
