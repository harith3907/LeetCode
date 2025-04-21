class Solution {
public:
    int minimumChairs(string s) {
        int maxPeople = 0, currentPeople = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'E') {
                currentPeople++;
            } else {
                currentPeople--;
            }
            if (currentPeople > maxPeople) {
                maxPeople = currentPeople;
            }
        }
        return maxPeople;
    }
};