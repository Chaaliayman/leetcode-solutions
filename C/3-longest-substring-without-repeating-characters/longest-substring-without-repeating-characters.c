int lengthOfLongestSubstring(char* s)
{
    long i = 0;
    long j = 0;
    long count = 0;
    long max = 0;
    while(s[j])
    {
        long k = i;
        while( k < j && s[k] != s[j])
        {
            k++;
        }
        if(k < j)
        {
            i = k + 1;
        }
        count = j - i + 1;
        if(count > max)
        {
            max = count;
        }
        j++;
    }
    return max;
}