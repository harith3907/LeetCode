class Solution {
public:
    string replaceDigits(string s) {
        int i = 0;
        string finalStr = "";
        while (i < s.length()) {
            finalStr += s[i];
            finalStr += s[i] + (s[i + 1] - '0');
            i += 2;
        }
        return s.length() % 2 == 1 ? finalStr.substr(0, finalStr.length() - 1) : finalStr.substr(0, finalStr.length());
    }
};