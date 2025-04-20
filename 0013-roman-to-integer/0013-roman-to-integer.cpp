#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int romanToInt(string s) {
            int x = 0;
            char y, z;
            for (int i = 0; i < s.length(); i++) {
                y = s[i];
                z = s[i + 1];
                if (y == 'I' && (z == 'V' || z == 'X')) {
                    x -= 1;
                }
                else if (y == 'X' && (z == 'L' || z == 'C')) {
                    x -= 10;
                }
                else if (y == 'C' && (z == 'D' || z == 'M')) {
                    x -= 100;
                }
                else {
                    switch (y) {
                        case 'I':
                            x += 1;
                            break;
                        case 'V':
                            x += 5;
                            break;
                        case 'X':
                            x += 10;
                            break;
                        case 'L':
                            x += 50;
                            break;
                        case 'C':
                            x += 100;
                            break;
                        case 'D':
                            x += 500;
                            break;
                        case 'M':
                            x += 1000;
                            break;
                    }
                }
            }
            return x;
        }
};