class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>st;
        string curr = "";
        for(char ch: s){
                if(ch =='('){
                st.push(curr);
                curr ="";
                }
                else if(ch ==')'){
                    reverse(curr.begin(),curr.end()); // reversinggg
                    curr=st.top()+curr;  //st.top is stored alreadty and curr is ahead so we add then and reverse finally 
                    st.pop();  // revmoveee it
                }
                else {
                    curr = curr+ch; // add the letter s wif brackets wereee not tthereee or inside the bracketsss
                }
            }
       return curr;
    }
};