class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>tt;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#'){
                st.push(s[i]);
            }
            else if (!st.empty()){
                st.pop();
            }
        }
         for(int j=0;j<t.size();j++){
            if(t[j]!='#'){
                tt.push(t[j]);
            }
            else if (!tt.empty()){
                tt.pop();
            }
       
        }
           if(st == tt){
            return true;
          }  
     return false;
        }
};