class Solution {
public:
    string truncateSentence(string s, int k) {
        s += ' ';
        string fs = "";
        int currentWords = 0, index = 0;
        while (currentWords < k) {
            if (s[index] == ' ') {
                currentWords++;
            }
            fs += s[index];
            index++;
        }
        return fs.substr(0, fs.length() - 1);
    }
};