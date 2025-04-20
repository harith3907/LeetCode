class Solution {
public:
    bool isPalindrome(string s) {
        string fs = "", rfs;
        for (int i = 0; i < s.length(); i++) {
            if (iswalnum(s[i]))
                fs += tolower(s[i]);
        }
        rfs = fs;
        reverse(rfs.begin(), rfs.end());
        return fs == rfs;
    }
};