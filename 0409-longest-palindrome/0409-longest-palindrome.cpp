class Solution {
public:
    int longestPalindrome(string s) {
    unordered_map<char,int>mpp;
       for(int i=0;i<s.size();i++){
          mpp[s[i]]++;
    }
    int flag=0; //odd
    int answer=0;
    for(auto it:mpp){
        if(it.second%2==0)
        answer+=it.second;
    
    else{
        answer+=it.second-1;
        flag=1;  // odd found
    }
    }
if(flag==1){
    answer+=1;


 }    
 return answer;
        
    }
};