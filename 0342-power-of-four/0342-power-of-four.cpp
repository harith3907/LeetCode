class Solution {
public:
    bool isPowerOfFour(int n) {
        long long x, i = 0;
        while (x <= n) {
            x = (long long)pow(4, i);
            if (x == n)
                return true;
            i++;
        }
        return false;
    }
};