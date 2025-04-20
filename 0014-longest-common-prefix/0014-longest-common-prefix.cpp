class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs.at(0);
        for (int i = 0; i < strs.size(); i++) {
            if (strs.at(i) == "") {
                return "";
            }
            for (int j = 0; j < strs.at(i).length(); j++) {
                if (prefix[j] != strs.at(i)[j]) {
                    prefix = prefix.substr(0, j);
                }
                if (prefix.length() > strs.at(i).length()) {
                    prefix = prefix.substr(0, strs.at(i).length());
                }
            }
        }
        return prefix;
    }
};