class Solution {
    public:
        string convertToBase7(int num) {
            string fs = "", ifs = "";
            int onum = num;
            if (num == 0)
                return "0";
            else if (num < 0)
                num *= -1;
            int exponent = 8, digit, divisor;
            char cdigit;
            if (num % 7 == 0) {
                while (num % 7 == 0) {
                    ifs += '0';
                    num /= 7;
                }
            }
            while (num > 0) {
                divisor = pow(7, exponent);
                digit = num / divisor;
                fs += (char)digit + 48;
                num %= divisor;
                exponent--;
            }
            fs += ifs;
            int i = 0;
            while (fs[i] == '0')
                fs = fs.substr(1, fs.length() - 1);
            if (onum < 0)
                fs = '-' + fs;
            return fs;
        }
};