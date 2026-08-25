class Solution {
public:
    int findGCD(vector<int>& nums) {
        int gcd=1;
        int n=nums.size()-1;
     sort(nums.begin(),nums.end());
        for(int i=1;i<=nums[0];i++){
            if(nums[0]%i==0 && nums[n]%i==0){
                gcd=i;
                
            }
        }        
        return gcd;
    }
};