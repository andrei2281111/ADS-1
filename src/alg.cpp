int cbinsearch(int* arr, int size, int value) {
int El_First = 0;
int El_Last = size;
int n = 0;
while (El_First <= El_Last)
{
int Mid = (El_First + El_Last) / 2;
if (arr[Mid] == value)
{
n += 1;
int k = 1;
while ((Mid + k <= size) && (arr[Mid + k] == value))
{
n += 1;
k++;
}
  k=1;
while ((Mid - k >= 0) && (arr[Mid - k] == value))
{
n += 1;
k++;
}
break;
}
if (arr[Mid] < value)
{
El_First = Mid + 1;
}
else
{
El_Last = Mid - 1;
}
}
return n;
}
