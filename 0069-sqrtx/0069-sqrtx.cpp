class Solution {
public:
    int mySqrt(int x) {
        int y = 0;
        if (x < 2)
            return x;
        long long square = 0;
        while (square < x) {
            y++;
            square = (long long)y * y;
            if (square == x)
                return y;
        }
        return y - 1;
    }
};