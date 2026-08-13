class Solution {
public:
    string reverseWords(string s) {

        int start = 0;

      
        for(int i = 0; i <= s.size(); i++) {

           
            if(i == s.size() || s[i] == ' ') {

                // i is NOT included in reverse()
                reverse(s.begin() + start, s.begin() + i);

                // Start of next word
                start = i + 1;
            }
        }

        return s;
    }
};