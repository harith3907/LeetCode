class Solution {
public:
    int climbStairs(int n) {
        int a = 2, b = 3, c;
        if (n == 1)
            return n;
        else if (n == 2)
            return a;
        else if (n == 3)
            return b;
        else {
            for (int i = 4; i <= n; i++) {
                c = a + b;
                a = b;
                b = c;
            }
        }
        return c;
    }
};