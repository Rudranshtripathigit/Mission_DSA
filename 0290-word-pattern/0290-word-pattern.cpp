class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string w;
        vector<string> v;

        while (ss >> w)
            v.push_back(w);

        if (pattern.size() != v.size()) return false;

        for (int i = 0; i < pattern.size(); i++) {
            for (int j = 0; j < i; j++) {
                if ((pattern[i] == pattern[j]) != (v[i] == v[j]))
                    return false;
            }
        }

        return true;
    }
};