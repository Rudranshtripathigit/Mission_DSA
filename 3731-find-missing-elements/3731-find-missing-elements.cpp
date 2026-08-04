class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       vector<int>ans;
       unordered_set<int> st(nums.begin(), nums.end());
     int n =nums.size()-1;
int mn = *min_element(nums.begin(), nums.end());
int mx = *max_element(nums.begin(), nums.end());
   for(int i = mn + 1; i < mx; i++) {
    if (!st.count(i)) {   // i is not present in the set
        ans.push_back(i); // add it to the answer
    }
}

return ans;



    }      
};