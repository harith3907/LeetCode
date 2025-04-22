class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int con1s = 0, maxcon1s = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                con1s++;
            } else {
                con1s = 0;
            }
            if (con1s > maxcon1s) {
                maxcon1s = con1s;
            }
        }
        return maxcon1s;
    }
};