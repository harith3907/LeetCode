class Solution {
public:
    vector<string> cellsInRange(string s) {
        char col1 = s[0];
        int row1 = s[1] - '0';
        char col2 = s[3];
        int row2 = s[4] - '0';
        vector<string> range;
        char temp = col1;
        while (temp <= col2) {
            for (int i = row1; i <= row2; i++) {
                range.push_back(temp + to_string(i));
            }
            temp++;
        }
        return range;
    }
};