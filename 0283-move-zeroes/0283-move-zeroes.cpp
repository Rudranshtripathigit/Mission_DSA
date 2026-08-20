class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n=nums.size();
       int i=0;
       for(int val=0;val<nums.size();val++){
        if(nums[val]!=0){
         swap(nums[i], nums[val]);
         i++;
        }
       }
    }
};