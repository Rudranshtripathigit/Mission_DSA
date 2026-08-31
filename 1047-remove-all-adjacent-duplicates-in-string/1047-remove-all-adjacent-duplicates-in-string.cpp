class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>ans;
        for(int i=0;i<s.size();i++){
              if(!ans.empty() && ans.top() == s[i]) {
                ans.pop();
              }
            else {
                ans.push(s[i]);
            }
        }

        string result="";
        while(!ans.empty()){
            result=result+ans.top();
            ans.pop();
     
        }
           reverse(result.begin(), result.end());
    return result;  
    }
};