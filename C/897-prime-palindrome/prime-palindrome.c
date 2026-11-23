int    Reverse(int n) 
{
    int     x;
    int     rev;

    x = n;
    rev = 0;
    while (x > 0) 
    {
        int  r = x % 10;
        rev = rev * 10 + r;
        x = x / 10;
    }
    return rev == n;
}

int    prime(int n)
{
    int    i;
    
    if (n < 2)
    {
        return 0;
    }
    i = 2;
    while (i <= n / i)
    {
        if (n % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
} 

int    primePalindrome(int n)
{
    while(1)
    { 
        if (Reverse(n) && prime(n))
        {
            return n;
        }
        if (n > 10000000   && n < 100000000)
        {
            n = 100000000 ;
        }
        n++;
    }
}
