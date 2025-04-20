class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector <double>ct;
        ct.push_back(celsius + 273.15);
        ct.push_back(celsius * 1.8 + 32.0);
        return ct;
    }
};