class Solution {
public:
    int addDigits(int num) {
        int sum = 999;
        string sver = to_string(num);
        while (to_string(sum).length() > 1) {
            sum = 0;
            for (int i = 0; i < sver.length(); i++) {
                sum += sver[i] - '0';
            }
            sver = to_string(sum);
        }
        return sum;
    }
};