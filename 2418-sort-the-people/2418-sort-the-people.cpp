class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> strheights, merged, final;
        for (int i = 0; i < heights.size(); i++) {
            strheights.push_back(to_string(heights[i]));
        }
        for (int i = 0; i < heights.size(); i++) {
            while (strheights[i].length() < 6) {
                strheights[i] = '0' + strheights[i];
            }
            merged.push_back(strheights[i] + names[i]);
        }
        sort(merged.begin(), merged.end());
        for (int i = heights.size() - 1; i >= 0; i--) {
            final.push_back(merged[i].substr(6, merged[i].length()));
        }
        return final;
    }
};