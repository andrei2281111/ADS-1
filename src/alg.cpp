int cbinsearch(int *arr, int size, int value)
{
int l = 0, s = size, midle = 0, a = 0;
while (l < s)
{
midle = (l + s - 1) / 2;
if (arr[midle] > value)
s = midle - 1;
else if (arr[midle] < value)
l = midle + 1;
else if (arr[midle] == value)
a++;
break;
}
if (a == 1)
{
for (int i = 0; i < midle; i++)
{
if (arr[i] == value)
a++;
}
for (int i = s - 1; i > midle; i--)
{
if (arr[i] == value)
a++;
}
}
return a;
}
