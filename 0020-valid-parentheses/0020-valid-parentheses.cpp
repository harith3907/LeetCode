class Solution {
    public:
        bool isValid(string s) {
            vector<char> stk = {};
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                    stk.insert(stk.begin(), s[i]);
                }
                else {
                    if (stk.empty())
                        return false;
                    else if (s[i] == ')' && stk.at(0) != '(') {
                        return false;
                    }
                    else if (s[i] == ']' && stk.at(0) != '[') {
                        return false;
                    }
                    else if (s[i] == '}' && stk.at(0) != '{') {
                        return false;
                    }
                    else
                        stk.erase(stk.begin());
                }
            }
            return stk.empty();
        }
};