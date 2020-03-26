int cbinsearch(int *arr, int size, int value)
{
  int center = size/2;;
  int k = ;
  amountElements = 0;
  
  
  if (arr[center + size/k] > value) 
    {
     k += 2; 
     center = center + size/k;
    }
    
    if (arr[center + size/k] < value) 
    {
     k += 2; 
     center = center - size/k;
    }
    
    if (arr[center + size/k] == value) 
    {
     amountElements++;
     
     while (arr[center + size/k] == value)
      {
       amountElements++;
       size/k += 1;
      }
      
      while (arr[center - size/k] == value)
      {
       amountElements++;
       size/k -= 1;
      }
      
      return amountElements;
    }
}
