class Solution {
public:
    int firstUniqChar(string s) {

        int count[26] = {0};

        // Count each character
        for(int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
        }

        // Find first character occurring once
        for(int i = 0; i < s.size(); i++) {
            if(count[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};