class Solution {
public:
    string reverseStr(string s, int k) {

        int count = 0;

        for(int i = 0; i < s.size(); i++) {

            count++;

            // We have found k characters
            if(count == k) {

                // Reverse the current k characters
                reverse(s.begin() + i - k + 1,
                        s.begin() + i + 1);

                // Skip the next k characters
                i = i + k;

                // Start counting again
                count = 0;
            }
        }

        if(count > 0) {
            reverse(s.end() - count, s.end());
        }

        return s;
    }
};