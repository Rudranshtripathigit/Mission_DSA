class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
     int n = nums.size()-1;
     sort(nums.begin(),nums.end());
     int sum=0;
     for(int i =0;i<n;i=i+2) { // odd minimum hogaa in pairs mee (odd, even ) even>odd so ultimately we have to sum the odd onlyyy
        sum=sum+nums[i];     
        }
        return sum;
     
    }
};