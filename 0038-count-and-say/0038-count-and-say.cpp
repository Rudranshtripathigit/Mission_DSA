class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for(int k = 1; k < n; k++) {
            string ans = "";
           for(int i = 0; i < s.size(); i++) {
                int count = 1;
                 while(i + 1 < s.size() && s[i] == s[i + 1]) {
                    count++;
                    i++;
                }
                ans += to_string(count);
                ans += s[i];
            }
           s = ans;
        }
        return s;
    }
};