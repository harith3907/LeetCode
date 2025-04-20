class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> f;
        for (int i = 0; i < n; i++) {
            f.push_back(nums[i]);
            f.push_back(nums[i + n]);
        }
        return f;
    }
};