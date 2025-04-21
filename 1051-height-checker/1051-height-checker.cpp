class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int mismatch = 0;
        vector<int> sortedHeights = heights;
        sort(sortedHeights.begin(), sortedHeights.end());
        for (int i = 0; i < heights.size(); i++)
            if (heights[i] != sortedHeights[i])
                mismatch++;
        return mismatch;
    }
};