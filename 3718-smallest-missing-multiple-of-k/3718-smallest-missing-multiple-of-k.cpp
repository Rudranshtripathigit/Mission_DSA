class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) { int x=k;
        while(true){
            bool found=false;
            for(int i:nums){
                if(i==x){
             found=true;
                }
            }
            if(!found)return x;
            x+=k;
        }
    }
};