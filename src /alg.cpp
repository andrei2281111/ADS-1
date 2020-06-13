#include "stdafx.h"
#include <iostream>
 
void main()
{
    int n, src;
    std::cout<<"Size:\t";
    std::cin>>n;
    std::cout<<"Search:\t";
    std::cin>>src;
 
    int *mas = new int[n];//динамический массив
    for(int i = 0; i < n; ++i)//заполнение
        mas[i] = i;
 
    int half = 0;
    int first = 0;
    int middle = 0;
    while (n > 0)
    {
        half = n / 2;
        middle = first + half;
        if (src < mas[middle])
            n = half;
        else
        {
            first = middle + 1;
            n = n - half - 1;
        }
    }
    std::cout<<"\nRezult index:\t"<<first;
    std::cin.get();
    std::cin.get();
}
