class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq;
        int maxNum = *max_element(nums.begin(), nums.end());
        freq.resize(maxNum);
        fill(freq.begin(), freq.end(), 0);
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i] - 1]++;
        }
        int maxFreq = *max_element(freq.begin(), freq.end()), CEMF = 0;
        for (int i = 0; i < freq.size(); i++) {
            if (freq[i] == maxFreq) {
                CEMF += maxFreq;
            }
        }
        return CEMF;
    }
};