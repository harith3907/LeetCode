class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int seconds = 0, mx = 0, my = 0;
        for (int i = 1; i < points.size(); i++) {
            mx = abs(points[i][0] - points[i - 1][0]);
            my = abs(points[i][1] - points[i - 1][1]);
            seconds += max(mx, my);
        }
        return seconds;
    }
};