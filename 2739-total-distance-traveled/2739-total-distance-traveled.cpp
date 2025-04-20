class Solution {
    public:
        int distanceTraveled(int mainTank, int additionalTank) {
            int currentMainTank = mainTank, currentAdditionalTank = additionalTank, tempConsumed = 0, overallConsumed = 0;
            while (currentMainTank > 0) {
                currentMainTank--;
                tempConsumed++;
                overallConsumed++;
                if (tempConsumed == 5 && currentAdditionalTank > 0) {
                    currentMainTank++;
                    currentAdditionalTank--;
                    tempConsumed = 0;
                }
            }
            return overallConsumed * 10;
        }
};