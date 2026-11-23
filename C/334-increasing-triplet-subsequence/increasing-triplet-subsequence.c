/* ************************************************************************** */
/*                                                                            */
/*                                                        :        ::::::::   */
/*                                                                            */
/*       CCCCC  H   H   AAAAA   AAAAA   L       IIIII                         */
/*      C       H   H   A   A   A   A   L         I                           */
/*      C       HHHHH   AAAAA   AAAAA   L         I                          */
/*      C       H   H   A   A   A   A   L         I                         */
/*       CCCCC  H   H   A   A   A   A   LLLLL   IIIII                      */
/*                                                                        */
/*                                                                       */
/*                                                                     */
/* ****************************************************************** */

bool increasingTriplet(int* nums, int numsSize)
{ 
    int first = INT_MAX;
    int second = INT_MAX;
    int i = 0;
    while(i < numsSize)
    {
        if(nums[i] <= first)
            first = nums[i];
        else if(nums[i] <= second)
            second = nums[i];
        else 
            return true;
        i++;
    }
    return false;
}
