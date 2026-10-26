bool isPalindrome(int x)
{   
    int n = x;
    long long rev = 0;
    while(n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if(rev == x)
    {
        return true;
    }
    return false;
}