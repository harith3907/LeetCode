class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int unique = 0;
        vector<int> frequency;
        for (int i = 0; i < 100; i++)
            frequency.push_back(0);
        for (int i = 0; i < nums.size(); i++)
            frequency[nums[i] - 1]++;
        for (int i = 0; i < 100; i++)
            if (frequency[i] == 1)
                unique += (i + 1);
        return unique;
    }
};