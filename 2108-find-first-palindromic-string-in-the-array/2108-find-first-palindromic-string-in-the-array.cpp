class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string temp;
        for (int i = 0; i < words.size(); i++) {
            temp = words[i];
            reverse(temp.begin(), temp.end());
            if (words[i] == temp) {
                return words[i];
            }
        }
        return "";
    }
};