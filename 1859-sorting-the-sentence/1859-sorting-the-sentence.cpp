class Solution {
public:
    string sortSentence(string s) {
        s += ' ';
        vector<string> words;
        string finalstr = "";
        int startIndex = 0, length = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                words.push_back(s.substr(i - 1, 1) + s.substr(startIndex, length - 1));
                startIndex = i + 1;
                length = 0;
            } else {
                length++;
            }
        }
        sort(words.begin(), words.end());
        for (int i = 0; i < words.size(); i++) {
            finalstr += words[i].substr(1, words[i].length() - 1) + " ";
        }
        return finalstr.substr(0, finalstr.length() - 1);
    }
};