class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int jewelCount = 0;
       for (int i = 0; i < stones.length(); i++) {
            for (int j = 0; j < jewels.length(); j++) {
                if (stones[i] == jewels[j]) {
                    jewelCount++;
                }
            }
        } 
        return jewelCount;
    }
};