class Solution {
public:
    int lengthOfLastWord(string s) {
        int startIndex = s.length() - 1;
        int i = startIndex, charCount = 0;
        if (s.find(' ') == -1)
            return s.length();
        while (s[i] == ' ') {
            s = s.substr(0, i);
            i--;
        }
        if (s.find(' ') == -1)
            return s.length();
        while (s[i] != ' ') {
            charCount++;
            i--;
        }
        return charCount;
    }
};