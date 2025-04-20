class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int vl = nums.size();
        int scn = ((vl * (vl + 1)) / 2), acn = 0;
        for (int i = 0; i < vl; i++) {
            acn += nums.at(i);
        }
        return scn - acn;
    }
};