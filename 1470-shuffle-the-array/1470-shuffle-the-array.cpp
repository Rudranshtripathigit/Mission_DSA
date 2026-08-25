class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>arr;
        vector<int>rra;
        vector<int>c;
          for(int i=0;i<=n;i++){
            arr.push_back(nums[i]);
          }
          for(int j=n;j<nums.size();j++){
            rra.push_back(nums[j]);
          }
        for(int i=0,j=0;i<arr.size() && j<rra.size();i++,j++){
            c.push_back(arr[i]);
            c.push_back(rra[i]);
          }
        
  return c;
        
    }
};