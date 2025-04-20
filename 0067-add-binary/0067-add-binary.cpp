class Solution {
    public:
        string addBinary(string a, string b) {
            bool carry = false;
            string temp, sum = "";
            int ld = 0;
            if (a.length() < b.length()) {
                temp = a;
                a = b;
                b = temp;
            }
            ld = a.length() - b.length();
            for (int i = 0; i < ld; i++) {
                b = "0" + b;
            }
            for (int j = a.length() - 1; j >= 0; j--) {
                if (a[j] == '0' && b[j] == '0') {
                    if (carry) {
                        sum = "1" + sum;
                        carry = false;
                    }
                    else {
                        sum = "0" + sum;
                    }
                }
                else if ((a[j] == '1' && b[j] == '0') || (a[j] == '0' && b[j] == '1')) {
                    if (carry) {
                        sum = "0" + sum;
                    }
                    else {
                        sum = "1" + sum;
                    }
                }
                else if (a[j] == '1' && b[j] == '1') {
                    if (carry) {
                        sum = "1" + sum;
                        carry = true;
                    }
                    else {
                        sum = "0" + sum;
                        carry = true;
                    }
                }
            }
            if (carry) {
                sum = "1" + sum;
            }
            return sum;
        }
};