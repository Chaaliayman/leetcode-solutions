void    reverseString(char* s, int sSize) {
    int     i;

    i = 0 ;
    while (i < sSize / 2)
    {
        int tmp ; 
        tmp = s[i];
        s[i] = s[sSize - i - 1 ];
        s[sSize - i - 1 ] = tmp ;
        i++;
    }
}