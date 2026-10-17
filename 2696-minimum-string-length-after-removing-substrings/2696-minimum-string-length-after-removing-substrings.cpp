class Solution {
public:
    int minLength(string s) {
        string st = "";
        
           for (char c : s) {
            st += c;

            int n = st.size();
            if (n >= 2) {
                string last = st.substr(n - 2, 2);
              if (last == "AB" || last == "CD") {
                    st.pop_back();
                    st.pop_back();
                }
            }
        }
       return st.size();
    }
};