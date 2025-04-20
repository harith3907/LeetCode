class Solution {
public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        string ys = "", ms = "", ds = "";
        while (year > 0) {
            ys = to_string(year % 2) + ys;
            year /= 2;
        }
        while (month > 0) {
            ms = to_string(month % 2) + ms;
            month /= 2;
        }
        while (day > 0) {
            ds = to_string(day % 2) + ds;
            day /= 2;
        }
        return ys + "-" + ms + "-" + ds;
    }
};