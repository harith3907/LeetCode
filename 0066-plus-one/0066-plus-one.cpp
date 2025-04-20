class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits.at(digits.size() - 1)++;
       for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits.at(i) == 10) {
                if (i == 0) {
                    digits.insert(digits.begin(), 1);
                    digits.at(1) = 0;
                }
                else {
                    digits.at(i) = 0;
                    digits.at(i - 1)++;
                }
            }
        }
        return digits;
    }
};