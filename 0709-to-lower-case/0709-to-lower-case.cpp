class Solution {
public:
    string toLowerCase(string s) {
        string fs = "";
        for (int i = 0; i < s.length(); i++) {
            if ((int)s[i] >= 65 && (int)s[i] <= 90)
                fs += (char)((int)s[i] + 32);
            else
                fs += s[i];
        }
        return fs;
    }
};