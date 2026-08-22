class Solution {
public:
    bool checkDivisibility(int n) {
        int digsum = 0;
        int digpro = 1;

        string s = to_string(n);

        for(int i = 0; i < s.size(); i++) {
            digsum += s[i] - '0';
            digpro *= s[i] - '0';
        }

        int devide = digsum + digpro;

        if(n % devide == 0) {
            return true;
        }

        return false;
    }
};