class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> decrypted;
        int tempSum, index;
        for (int i = 0; i < code.size(); i++) {
            tempSum = 0;
            if (k > 0) {
                for (int j = 1; j <= k; j++) {
                    tempSum += code[(i + j) % code.size()];
                }
            }
            else {
                for (int j = 1; j <= abs(k); j++) {
                    index = i - j;
                    if (index < 0) {
                        index += code.size();
                    }
                    tempSum += code[index];
                }
            }
            decrypted.push_back(tempSum);
        }
        return decrypted;
    }
};