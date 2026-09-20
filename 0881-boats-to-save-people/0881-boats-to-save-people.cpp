class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        sort(p.begin(), p.end());
 int l = 0, r = p.size() - 1, ans = 0;
      while (l <= r) {
            if (p[l] + p[r] <= limit)
                l++;
            r--;
            ans++;
        }
return ans;
    }
};