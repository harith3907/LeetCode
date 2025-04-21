class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int matches = 0;
        for (int i = 0; i < items.size(); i++) {
            if (ruleKey == "type") {
                if (items[i][0] == ruleValue) {
                    matches++;
                }
            }
            else if (ruleKey == "color") {
                if (items[i][1] == ruleValue) {
                    matches++;
                }
            }
            else if (ruleKey == "name") {
                if (items[i][2] == ruleValue) {
                    matches++;
                }
            }
        }
        return matches;
    }
};