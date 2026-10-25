bool checkPrimeFrequency(int* nums, int numsSize) 
{
      int i = 0;
 
    while (i < numsSize) {
        int count = 0;
        int j = 0;
        
        while(j < numsSize)
        {
        if (nums[i] == nums[j])
            count++;
        
        j++;
        }   
  int n = 2;
  int is_prime = 1;
  while(n <= count / n)
  {
    if(count  % n == 0)
    {
        is_prime = 0;
        break;
    } 
    n++;
  }
    if(is_prime == 1 && count >= 2)
    {
        return true;
    }
    i++;
    }
  return false; 
}