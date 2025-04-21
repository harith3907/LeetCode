class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits;
        int tempNum, tempBitCount;
        string tempStr;
        for (int i = 0; i <= n; i++) {
            tempNum = i;
            tempStr = "";
            tempBitCount = 0;
            while (tempNum > 0) {
                tempStr = to_string(tempNum % 2) + tempStr;
                tempNum /= 2;
            }
            for (int j = 0; j < tempStr.length(); j++) {
                if (tempStr[j] == '1') {
                    tempBitCount++;
                }
            }
            bits.push_back(tempBitCount);
        }
        return bits;
    }
};