class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos =0, index = haystack.find(needle, pos);
        return index;
    }
};
