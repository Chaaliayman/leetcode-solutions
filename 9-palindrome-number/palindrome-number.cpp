class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0;
        long orginal = x;
        if(x < 0)
            return false;
        while(x > 0)
        {
            long digit = x % 10;
            x = x / 10;
            rev = rev * 10 + digit;
        }
        return orginal == rev;
    }
};