class Solution {
    public:
        string convertToTitle(int columnNumber) {
            string t = "", x;
            int cl, temp;
            while (columnNumber > 0) {
                columnNumber--;
                cl = columnNumber % 26;
                x = 'A' + cl;
                t = x + t;
                columnNumber /= 26;
            }
            return t;
        }
};