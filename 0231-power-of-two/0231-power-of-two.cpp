class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long x, i = 0;
        while (x <= n) {
            x = (long long)pow(2, i);
            if (x == n)
                return true;
            i++;
        }
        return false;
    }
};