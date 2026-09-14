class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(auto i:s){
            if(isdigit(i)){
                if(!st.empty()) st.pop();
            }
            else{
                st.push(i);
            }
        }
    string result;
    while(!st.empty()){
    result +=st.top();
    st.pop();
    }
  
    reverse(result.begin(),result.end());
    return result;
    }
};