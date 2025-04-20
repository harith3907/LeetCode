class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ns = "";
        int j = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != '-') {
                ns += toupper(s[i]);
                j++;
                if (j == k) {
                    ns += '-';
                    j = 0;
                }
            }
        }
        reverse(ns.begin(), ns.end());
        if (ns[0] == '-')
            ns = ns.substr(1, ns.length() - 1);
        return ns;
    }
};