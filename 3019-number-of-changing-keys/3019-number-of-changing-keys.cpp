class Solution {
public:
    int countKeyChanges(string s) {
        int keyChanges = 0;
        for (int i = 1; i < s.length(); i++) {
            if (tolower(s[i]) != tolower(s[i - 1])) {
                keyChanges++;
            }
        }
        return keyChanges;
    }
};