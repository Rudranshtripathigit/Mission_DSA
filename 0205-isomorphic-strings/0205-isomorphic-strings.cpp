class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sToT[256] = {};
        int tToS[256] = {};

        for(int i = 0; i < s.size(); i++) {

            if(sToT[s[i]] != 0 && sToT[s[i]] != t[i])
                return false;

            if(tToS[t[i]] != 0 && tToS[t[i]] != s[i])
                return false;

            sToT[s[i]] = t[i];
            tToS[t[i]] = s[i];
        }

        return true;
    }
};