class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        vector<int> even;
        vector<int> odd;
        vector<int> result;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] % 2 == 0) {
                even.push_back(nums[i]);
            }
            else {
                odd.push_back(nums[i]);
            }
        }

        for(int x : even) {
            result.push_back(x);
        }

        for(int x : odd) {
            result.push_back(x);
        }

        return result;
    }
};