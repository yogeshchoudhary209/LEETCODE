class Solution {
public:
    int fib(int n) {
        if(n<2)
            return n;
        int a = 0, b = 1;
        while(--n) {
            int c= a + b;
            a = b;
            b = c;
        }
        return b;
    }
};
