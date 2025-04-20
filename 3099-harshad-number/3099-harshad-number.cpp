class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        return (x == 100) ? 1 : (x % ((x / 10) + (x % 10)) == 0 ? ((x / 10) + (x % 10)) : -1);
    }
};