class Solution {
public:
    int countAsterisks(string s) {
        bool countAsterisks = true;
        int numOfAsterisks = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '|') {
                countAsterisks = !countAsterisks;
            }
            if (countAsterisks) {
                if (s[i] == '*') {
                    numOfAsterisks++;
                }
            }
        }
        return numOfAsterisks;
    }
};