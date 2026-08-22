class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
       while(s[s.size()-1] == ' ')
            s.pop_back();
       for(int i = s.size()-1; i >= 0 && s[i] != ' '; i--)
            count++;
       return count;
    }
};