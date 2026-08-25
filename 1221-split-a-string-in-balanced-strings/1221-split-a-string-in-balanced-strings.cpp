class Solution {
public:
    int balancedStringSplit(string s) {

        int L=0;
        int R=0;
        int count=0;
     
      for(int i=0;i<s.size();i++){
          if(s[i]=='R'){
                R++;
            }
            if(s[i]=='L'){
                L++;
            }
        if(L==R){
            count++;

        }
        }
    return count;
    }
};