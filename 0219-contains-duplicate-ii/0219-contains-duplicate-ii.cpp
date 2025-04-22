class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] == nums[j] && i != j && abs(i - j) <= k) {
                    return true;
                }
            }
        }
        return false;
    }
};