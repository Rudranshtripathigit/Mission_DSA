class Solution {
public:
    int scoreOfParentheses(string s) {
        int count = 0, ans = 0;
        int power = 1;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '(') {
                count++;
                power *= 2;
            }
            else {
                count--;

                if(s[i-1] == '(')
                    ans += power / 2;

                power /= 2;
            }
        }

        return ans;
    }
};