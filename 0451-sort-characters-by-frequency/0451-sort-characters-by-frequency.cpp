class Solution {
public:
    string frequencySort(string s) {
        string ans = "";

        while (!s.empty()) {
            int freq[256] = {};

            for (char c : s)
                freq[c]++;

            char mx = s[0];

            for (char c : s)
                if (freq[c] > freq[mx])
                    mx = c;

            ans += string(freq[mx], mx);

            s.erase(remove(s.begin(), s.end(), mx), s.end());
        }

        return ans;
    }
};