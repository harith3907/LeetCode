class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;
        else {
            int len = s.length();
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            for (int i = 0; i < len; i++)
                if (s[i] != t[i])
                    return false;
        }
        return true;
    }
};