class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowels;
        string fs = "";
        int vowelIdx = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                vowels.push_back(s[i]);
            }
        }
        reverse(vowels.begin(), vowels.end());
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                fs += vowels[vowelIdx];
                vowelIdx++;
            } else {
                fs += s[i];
            }
        }
        return fs;
    }
};