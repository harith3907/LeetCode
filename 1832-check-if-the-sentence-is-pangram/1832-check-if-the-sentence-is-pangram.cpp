class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool letterAppeared[26];
        for (int i = 0; i < 26; i++) {
            letterAppeared[i] = false;
        }
        for (int i = 0; i < sentence.length(); i++) {
            letterAppeared[sentence[i] - 'a'] = true;
        }
        for (int i = 0; i < 26; i++) {
            if (!letterAppeared[i]) {
                return false;
            }
        }
        return true;
    }
};