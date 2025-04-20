class Solution {
public:
    int arrangeCoins(int n) {
        long long i = 0;
        long long t = 1;
        while (n >= t) {
            t = (i * (i + 1)) / 2;
            if (n == t)
                return i;
            i++;
        }
        return i - 2;
    }
};