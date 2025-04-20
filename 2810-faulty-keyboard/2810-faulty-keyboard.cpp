class Solution {
public:
    string finalString(string s) {
        string fs = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'i')
                reverse(fs.begin(), fs.end());
            else {
                fs += s[i];
            }
        }
        return fs;
    }
};