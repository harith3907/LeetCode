class Solution {
    public:
        string capitalizeTitle(string title) {
            int sidx = 0, len;
            for (int i = 0; i < title.length(); i++)
                title[i] = tolower(title[i]);
            if (title.find(' ') == -1) {
                if (title.length() >= 3)
                    title[0] = toupper(title[0]);
            } else {
                if (title.substr(0, title.find(' ')).length() >= 3)
                    title[0] = toupper(title[0]);
                for (int i = 0; i < title.length() - 1; i++) {
                    if (title[i] == ' ') {
                        sidx = i + 1;
                        len = 1;
                        i++;
                        while (title[i] != ' ' && i <= title.length() - 1) {
                            len++;
                            i++;
                        }
                        len--;
                        i--;
                        if (len >= 3) {
                            title[sidx] = toupper(title[sidx]);
                        }
                    }
                }
            }
            return title;
        }
};