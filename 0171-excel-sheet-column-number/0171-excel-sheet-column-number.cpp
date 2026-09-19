class Solution {
public:
    int titleToNumber(string columnTitle) {
        long ans = 0;

        for (int i = 0; i < columnTitle.length(); i++) {
            char ch = columnTitle[i];
            ans = ans * 26 + (ch - 'A' + 1);
        }

        return ans;
    }
};