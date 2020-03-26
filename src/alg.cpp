int cbinsearch(int *arr, int size, int value)
{
  int center = size/2;
  int k = 2;
  int amountElements = 0;
  
    for(int i = 0; (1 < (size / i)) || (arr[center + size/k] != value) ; i += 2)
    {
    if (arr[center + size/k] > value) 
    {
     k += 2; 
     center = center - size/k;
    }
    
    if (arr[center + size/k] < value) 
    {
     k += 2; 
     center = center + size/k;
    }
    }
    
    if (arr[center + size/k] == value) 
    {
     amountElements++;
     
     while (arr[center + size/k + 1] == value)
      {
       amountElements++;
       size/k += 1;      
      }
      
      while (arr[center - size/k - 1] == value)
      {
       amountElements++;
       size/k -= 1;
      }
      
      return amountElements;
    }
}
