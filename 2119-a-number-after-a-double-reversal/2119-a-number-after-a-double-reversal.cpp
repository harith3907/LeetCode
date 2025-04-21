class Solution {
public:
    bool isSameAfterReversals(int num) {
        string strNum = to_string(num);
        reverse(strNum.begin(), strNum.end());
        int drNum = stoi(strNum);
        strNum = to_string(drNum);
        reverse(strNum.begin(), strNum.end());
        drNum = stoi(strNum);
        return num == drNum;
    }
};