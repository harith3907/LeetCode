class Solution {
public:
    string freqAlphabets(string s) {
        int i = s.length() - 1, cl;
        string fs = "";
        while (i >= 0) {
            if (s[i] == '#') {
                cl = stoi(s.substr(i - 2, 2));
                fs += ((char)'`' + cl);
                i -= 2;
            } else {
                cl = stoi(s.substr(i, 1));
                fs += ((char)'`' + cl);
            }
            i--;
        }
        reverse(fs.begin(), fs.end());
        return fs;
    }
};