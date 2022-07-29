class Solution {
public:
    bool isPalindrome(int x) {
        int64_t n, digit, rev = 0;
        n= x;
        do
        {
            digit = x % 10;
            rev = (rev * 10) +digit;
            x= x/10;
        } while(x != 0);
        if (n == rev && n>=0)
            return true;
        else
            return false;
    }
};
