class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pt(rowIndex + 1);
        for (int i = 0; i < rowIndex + 1; i++) {
            pt[i].resize(i + 1);
        }
        for (int i = 0; i < rowIndex + 1; i++) {
            pt[i][0] = 1;
            pt[i][i] = 1;
            for (int j = 1; j < i; j++) {
                pt[i][j] = pt[i - 1][j - 1] + pt[i - 1][j];
            }
        }
        return pt.at(rowIndex);
    }
};