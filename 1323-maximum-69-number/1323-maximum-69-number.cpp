class Solution {
    public:
        int maximum69Number (int num) {
            int maxnum = 0;
            string snum;
            for (int i = 0; i < to_string(num).length(); i++) {
                snum = to_string(num);
                if (snum[i] == '6')
                snum[i] = '9';
                else
                snum[i] = '6';
                if (stoi(snum) > maxnum)
                    maxnum = stoi(snum);
            }
            if (num > maxnum)
                maxnum = num;
            return maxnum;
        }
};