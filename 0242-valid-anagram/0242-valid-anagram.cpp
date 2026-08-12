class Solution {
public:
    bool isAnagram(string s, string t) {

        // If lengths are different, they cannot be anagrams
        if(s.size() != t.size())
            return false;

        // freq[i] stores the frequency of each lowercase character
        // 0 -> 'a', 1 -> 'b', ..., 25 -> 'z'
        int freq[26] = {0};

        // Count every character in string s
        for(char c : s)
            freq[c - 'a']++;

        // Remove every character found in string t
        for(char c : t)
            freq[c - 'a']--;

        // If any frequency is not 0,
        // the two strings don't contain the same characters
        for(int i = 0; i < 26; i++) {
            if(freq[i] != 0)
                return false;
        }

        // All frequencies are 0 → both strings are anagrams
        return true;
    }
};