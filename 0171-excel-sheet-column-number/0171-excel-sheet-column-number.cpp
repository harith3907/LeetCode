class Solution {
public:
    int titleToNumber(string columnTitle) {
        int t = 0;
        for (int i = 0; i < columnTitle.length(); i++) {
            if (columnTitle.length() - i - 1 == 0) {
                t += (int(columnTitle[i]) - 64);
            }
            else {
                t += pow(26, columnTitle.length() - i - 1) * (int(columnTitle[i]) - 64);
            }
        }
        return t;
    }
};