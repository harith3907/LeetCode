class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> NSCN;
        NSCN.resize(nums.size());
        fill(NSCN.begin(), NSCN.end(), 0);
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] < nums[i]) {
                    NSCN[i]++;
                }
            }
        }
        return NSCN;
    }
};