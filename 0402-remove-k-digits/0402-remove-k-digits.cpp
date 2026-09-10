class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int> ans;

        for(int i = 0; i < num.size(); i++) {

            while(!ans.empty() && k > 0 && num[i] - '0' < ans.top()) {
                ans.pop();
                k--;
            }

            ans.push(num[i] - '0');
        }

        while(k > 0 && !ans.empty()) {
            ans.pop();
            k--;
        }

        string result = "";

        while(!ans.empty()) {
            result += char(ans.top() + '0');
            ans.pop();
        }

        reverse(result.begin(), result.end());

        int i = 0;

        while(i < result.size() && result[i] == '0') {
            i++;
        }

        result = result.substr(i);

        if(result == "") {
            return "0";
        }

        return result;
    }
};