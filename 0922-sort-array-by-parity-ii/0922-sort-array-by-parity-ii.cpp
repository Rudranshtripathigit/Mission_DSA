class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {

        vector<int> even;
        vector<int> odd;
        vector<int> ans;
  for (int x : nums) {
            if (x % 2 == 0)
                even.push_back(x);
            else
                odd.push_back(x);
        }
        for (int i = 0; i < nums.size()/ 2; i++) {
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
        }
        return ans;
    }
};