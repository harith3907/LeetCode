class Solution {
public:
    bool isPowerOfThree(int n) {
        long long x, i = 0;
        while (x <= n) {
            x = (long long)pow(3, i);
            if (x == n)
                return true;
            i++;
        }
        return false;
    }
};