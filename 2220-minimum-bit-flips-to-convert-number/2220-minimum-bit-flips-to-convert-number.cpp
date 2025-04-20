class Solution {
public:
    int minBitFlips(int start, int goal) {
        string ss = "", gs = "";
        int bitFlips = 0;
        while (start > 0) {
            ss = to_string(start % 2) + ss;
            start /= 2;
        }
        while (goal > 0) {
            gs = to_string(goal % 2) + gs;
            goal /= 2;
        }
        if (ss.length() <= gs.length())
            while (ss.length() != gs.length())
                ss = '0' + ss;
        else
            while (ss.length() != gs.length())
                    gs = '0' + gs;
        for (int i = 0; i < ss.length(); i++)
            if (ss[i] != gs[i])
                bitFlips++;
        return bitFlips;
    }
};