class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
         string ans(s.size(), ' '); // way too prrovide size and initizalise a string 
        for(int i=0;i<s.size();i++){
            ans[indices[i]]=s[i];
        }
     return ans;
    }
};