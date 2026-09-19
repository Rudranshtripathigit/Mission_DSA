class Solution {
public:
    vector<string> ans;

    void solve(int i, int n, int k, int cost, string s) {
        if (cost > k) return;

        if (i == n) {
            ans.push_back(s);
            return;
        }

        solve(i + 1, n, k, cost, s + '0');

        if (i == 0 || s.back() != '1')
            solve(i + 1, n, k, cost + i, s + '1');
    }

    vector<string> generateValidStrings(int n, int k) {
        solve(0, n, k, 0, "");
        return ans;
    }
};