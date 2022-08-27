class Solution {
public:
    bool isPalindrome(int x) {
        string n1 = to_string(x), n2 = to_string(x);
        reverse(begin(n2), end(n2));
        return n1 == n2;
    }
};
