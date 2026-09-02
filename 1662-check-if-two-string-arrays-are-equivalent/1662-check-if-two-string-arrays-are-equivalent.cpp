class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string sum1 = "";
        string sum2 = "";

        for(int i = 0; i < word1.size(); i++) {
            sum1 = sum1 + word1[i];
        }
        for(int j = 0; j < word2.size(); j++) {
            sum2 = sum2 + word2[j];
        }
     if(sum1 == sum2) {
         return true;
        }
return false;
    }
};