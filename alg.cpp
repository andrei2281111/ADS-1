int Search_Binary (int *arr, int size, int value)
{   int left=0;
    int right=size;
	int midd = 0;
	int n=0;
	while (1)
	{
		midd = (left + right) / 2;
		
		if (value < arr[midd])       
			right = midd - 1;   
      
		else if (value > arr[midd]) 
			left = midd + 1;	   
      
		else                        
			   n++; 
		    return n;              
      
		if (left > right)          
			return -1;
	}

}
