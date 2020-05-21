#include <iostream>

using namespace std;

int findLeftBorderInBorders(int *arr, int n, int element, int leftBorder, int rightBorder)
{
    if (rightBorder == leftBorder + 1) return leftBorder;
    int middle = (leftBorder + rightBorder)/2;
    if (arr[middle] < element)
        return findLeftBorderInBorders(arr, n, element, middle, rightBorder);
    else 
        return findLeftBorderInBorders(arr, n, element, leftBorder, middle);
}

int findLeftBorder(int *arr, int n, int element)
{
    int lastIndex = n;
    int zeroIndex = -1;
    return findLeftBorderInBorders(arr, n, element, zeroIndex, lastIndex);
}

int findRightBorderInBorders(int *arr, int n, int element, int leftBorder, int rightBorder)
{
    if (rightBorder == leftBorder + 1) return rightBorder;
    int middle = (leftBorder + rightBorder)/2;
    if (arr[middle] <= element)
        return findRightBorderInBorders(arr, n, element, middle, rightBorder);
    else 
        return findRightBorderInBorders(arr, n, element, leftBorder, middle);
}

int findRightBorder(int *arr, int n, int element)
{
    int lastIndex = n;
    int zeroIndex = -1;
    return findRightBorderInBorders(arr, n, element, zeroIndex, lastIndex);
}

int cbinsearch(int *arr, int size, int value)
{
	return (findRightBorder(arr, size, value) -  findLeftBorder(arr, size, value) - 1);

}
