class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans(s.size());

        for(int i = 0; i < s.size(); i++) {
            int mini = s.size();

         for(int j = 0; j < s.size(); j++) {
                if(s[j] == c) {
                    mini = min(mini, abs(i - j)); }
            }
             ans[i] = mini;
        }
return ans;
    }
};