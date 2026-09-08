class Solution {
public:
    int countCommas(int n) {
        int count = 0;
        int x = 0;

        if (n < 1000) {
            return 0;
        }

     for(int i=999;i<n;i++){
        count++;
     }
    return count;
    }
};