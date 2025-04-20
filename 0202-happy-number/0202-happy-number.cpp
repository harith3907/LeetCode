class Solution {
    public:
        bool isHappy(int n) {
            string sn = to_string(n);
            int sum = sn[0] - 48;
            while (sn.length() > 1) {
                sum = 0;
                for (int i = 0; i < sn.length(); i++)
                    sum += ((sn[i] - 48) * (sn[i] - 48));
                sn = to_string(sum);
            }
            return sum == 1 || sum == 7;
        }
};