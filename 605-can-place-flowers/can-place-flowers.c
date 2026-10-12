#include <stdio.h>
#include <stdbool.h>

bool  canPlaceFlowers(int *flowerbed, int sizeflowrs, int n)
{
    int i = 0;
    int flower = 0;

    while( i < sizeflowrs)
    {
        if(flowerbed[i] == 0 && 
            (i == 0 || flowerbed[i - 1] == 0 )&&
            ( i == sizeflowrs - 1 || flowerbed[i + 1] == 0 ))
            {
                flowerbed[i] = 1 ;
                flower++;
            }
            i++;
    }
    if(flower >= n)
    {
        return true;
    }
    else
    {
        return false;
    }
}