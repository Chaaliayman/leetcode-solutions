char * mergeAlternately(char * word1, char * word2)
{
    int     i;
    char len1 = strlen(word1);
    char len2 = strlen(word2);
    char *rus = malloc((len1 + len2) + 1);
    i = 0;
    int j = 0;
    int     k = 0;
    if(rus == NULL)
    {
        return NULL;
    }
    while(i < len1 ||j < len2 )
    {
        if(i < len1)
        rus[k++] = word1[i++];
        if(j < len2)
        {
            rus[k++] = word2[j++];
        }
    }
    rus[k] = '\0';
    return rus;
}