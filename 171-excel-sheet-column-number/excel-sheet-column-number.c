int titleToNumber(char* columnTitle) {
    int result = 0;
    for(int i = 0; columnTitle[i];i++)
    {
        int CHAALI = columnTitle[i] - 'A' + 1;
        result = result * 26 + CHAALI;
    }
    return result;
}