class Solution {
public:
    string reverseWords(string s) {
        s += ' ';
        string temp = "", finalStr = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                reverse(temp.begin(), temp.end());
                finalStr += temp + ' ';
                temp = "";
            } else {
                temp += s[i];
            }
        }
        return finalStr.substr(0, finalStr.length() - 1);
    }
};