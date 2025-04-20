class Solution {
    public:
        bool detectCapitalUse(string word) {
            string l = "", u = "", t = "";
            for (int i = 0; i < word.length(); i++) {
                l += tolower(word[i]);
                u += toupper(word[i]);
                t += tolower(word[i]);
            }
            t[0] = toupper(word[0]);
            return word == l || word == u || word == t;
        }
};