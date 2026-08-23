class Solution {
public:
   
bool sumGame(string num) {
    int sum1 = 0, sum2 = 0, q1 = 0, q2 = 0;

    for(int i = 0; i < num.size(); i++) {
        if(num[i] == '?') {
            if(i < num.size()/2) q1++;
            else q2++;
        }
        else {
            if(i < num.size()/2) sum1 += num[i] - '0';
            else sum2 += num[i] - '0';
        }
    }

    return (sum1 - sum2) * 2 != (q2 - q1) * 9;
}
};