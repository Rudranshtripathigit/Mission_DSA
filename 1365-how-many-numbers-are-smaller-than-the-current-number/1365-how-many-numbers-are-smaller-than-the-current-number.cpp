class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int x : nums) {
            mp[x]++;
        }

        vector<int> ans;

        for(int x : nums) {
            int count = 0;

            for(int i = 0; i < x; i++) {
                count += mp[i];
            }

            ans.push_back(count);
        }

        return ans;
    }
};