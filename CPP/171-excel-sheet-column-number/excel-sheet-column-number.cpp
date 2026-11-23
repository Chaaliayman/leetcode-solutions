class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        int i = 0;
        while(columnTitle[i] != '\0')
        {
            int Exel = columnTitle[i] - 'A' + 1;
            result = result * 26 + Exel;
            i++;
        }
        return result;
    }
};