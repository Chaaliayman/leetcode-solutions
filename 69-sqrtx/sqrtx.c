int     mySqrt(int x)
{    
    if (x <= 0)
    {
        return 0;
    }
    long    i;
    i = 0;
    while (i * i <= x)
    {
        i++;
    }
    return i - 1;
}