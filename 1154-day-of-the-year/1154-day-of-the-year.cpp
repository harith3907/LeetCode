class Solution {
    public:
        int dayOfYear(string date) {
            bool ly = false;
            int year, month, day, diy = 0;
            year = stoi(date.substr(0, 4));
            month = stoi(date.substr(5, 2));
            day = stoi(date.substr(8, 2));
            if (year % 4 == 0) {
                if (year % 100 == 0) {
                    if (year % 400 == 0) {
                        ly = true;
                    } else {
                        ly = false;
                    }
                } else {
                    ly = true;
                }
            }
            for (int i = 1; i < month; i++) {
                if (i <= 7) {
                    if (i % 2 == 0) {
                        diy += 30;
                    } else {
                        diy += 31;
                    }
                } else {
                    if (i % 2 == 0) {
                        diy += 31;
                    } else {
                        diy += 30;
                    }
                }
            }
            diy += day;
            if (month > 2) {
                if (ly) {
                    diy -= 1;
                } else {
                    diy -= 2;
                }
            }
            return diy;
        }
};