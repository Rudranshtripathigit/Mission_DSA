class Solution {
public:
    string removeStars(string s) {
        string result;

        for(char i : s) {
            if(i == '*') {
                result.pop_back();
            }
            else {
                result.push_back(i);
            }
        }

        return result;
    }
};