class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<string> strNums;
        vector<int> separatedDigits;
        for (int i = 0; i < nums.size(); i++) {
            strNums.push_back(to_string(nums[i]));
        }
        for (int i = 0; i < strNums.size(); i++) {
            for (int j = 0; j < strNums[i].length(); j++) {
                separatedDigits.push_back(strNums[i][j] - '0');
            }
        }
        return separatedDigits;
    }
};