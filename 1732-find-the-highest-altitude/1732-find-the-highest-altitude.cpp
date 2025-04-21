class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currAlt = 0, maxAlt = 0;
        for (int i = 0; i < gain.size(); i++) {
            currAlt += gain[i];
            if (currAlt > maxAlt) {
                maxAlt = currAlt;
            }
        }
        return maxAlt;
    }
};