class Solution {
public:
    string makeGood(string s) {
        string st = "";

        for(char c : s) {
            if(!st.empty() && 
              ((st.back() == c + 32) || (st.back() == c - 32))) {
                st.pop_back();
            }
            else {
                st += c;
            }
        }

        return st;
    }
};