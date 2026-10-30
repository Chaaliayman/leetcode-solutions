int pivotIndex(int* nums, int numsSize) {
    int sum_total = 0;
    int  sum_pivot = 0;
    int i = 0;
    while(i < numsSize)
    {
        sum_total += nums[i];
        i++;
    }
    i = 0;
        while(i < numsSize)
        {
            int right_sum = sum_total - sum_pivot - nums[i];

            if(sum_pivot == right_sum)
            {
                return i;
            }
            sum_pivot += nums[i];
            i++;
        }
        return -1;
}