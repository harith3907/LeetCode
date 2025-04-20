class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int li = nums.size() - 1;
        sort(nums.begin(), nums.end());
        if (nums.at(0) >= 0) {
            return nums.at(li) * nums.at(li - 1) * nums.at(li - 2);
        } else if (nums.at(0) < 0 && nums.at(li) <= 0) {
            return nums.at(li) * nums.at(li - 1) * nums.at(li - 2);
        } else {
            if ((nums.at(li) * nums.at(li - 1) * nums.at(li - 2)) > (nums.at(0) * nums.at(1) * nums.at(li)))
                return nums.at(li) * nums.at(li - 1) * nums.at(li - 2);
            else
                return nums.at(0) * nums.at(1) * nums.at(li);
        }
        return -1000;
    }
};