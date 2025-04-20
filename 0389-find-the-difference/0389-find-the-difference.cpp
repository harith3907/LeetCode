class Solution {
    public:
        char findTheDifference(string s, string t) {
            if (t.find(s) != string::npos)
                return t[t.length() - 1];
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            for (int i = 0; i < s.length() - 1; i++)
                if (s[i] != t[i])
                    return t[i];
            return t[t.length() - 1];
        }
};