class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 1;
        for (int i = 2; i <= ceil(num / 2); i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        return num == 1 ? false : num == sum;
    }
};