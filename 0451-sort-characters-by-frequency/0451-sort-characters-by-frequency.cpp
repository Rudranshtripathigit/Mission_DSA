class Solution {
public:
    string frequencySort(string s) {

        map<char, int> freq;

        for(char ch : s) {
            freq[ch]++;
        }

        vector<pair<int, char>> v;

        for(auto x : freq) {
            v.push_back({x.second, x.first});
        }

        sort(v.rbegin(), v.rend());

        string ans = "";

        for(auto x : v) {
            ans += string(x.first, x.second);
        }

        return ans;
    }
};