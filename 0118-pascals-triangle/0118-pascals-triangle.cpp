class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pt(numRows);
        for (int i = 0; i < numRows; i++) {
            pt[i].resize(i + 1);
        }
        for (int i = 0; i < numRows; i++) {
            pt[i][0] = 1;
            pt[i][i] = 1;
            for (int j = 1; j < i; j++) {
                pt[i][j] = pt[i - 1][j - 1] + pt[i - 1][j];
            }
        }
        return pt;
    }
};