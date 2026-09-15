class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        int a[26] = {0};

        for (char ch : allowed)
            a[ch - 'a'] = 1;

        for (string word : words) {
            int temp = 0;

            for (char ch : word)
                temp += a[ch - 'a'];

            if (temp == word.length())
                count++;
        }

        return count;
    }
};