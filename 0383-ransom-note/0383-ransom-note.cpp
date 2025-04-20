class Solution {
    public:
        bool canConstruct(string ransomNote, string magazine) {
            int s1c[26], s2c[26], itm;
            for (int i = 0; i < 26; i++) {
                s1c[i] = 0;
                s2c[i] = 0;
            }
            for (int i = 0; i < ransomNote.length(); i++) {
                itm = (int)ransomNote[i] - 97;
                s1c[itm]++;
            }
            for (int i = 0; i < magazine.length(); i++) {
                itm = (int)magazine[i] - 97;
                s2c[itm]++;
            }
            for (int i = 0; i < 26; i++)
                if (s1c[i] > s2c[i])
                    return false;
            return true;
        }
};