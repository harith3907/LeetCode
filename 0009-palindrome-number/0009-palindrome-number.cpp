class Solution {
public:
    bool isPalindrome(int x) {
        string y = to_string(x);
        int len = y.length();
        int z;
        for (int i = 0; i < len; i++) {
            z = len - i - 1;
            if (y[i] != y[z]) {
                return false;
            }
        }
        return true;
    }
};