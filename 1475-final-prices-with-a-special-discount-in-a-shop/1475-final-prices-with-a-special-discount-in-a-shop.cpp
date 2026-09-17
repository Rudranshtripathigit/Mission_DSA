class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result;

        for(int i = 0; i < prices.size(); i++) {
            int ans = prices[i];

            for(int j = i + 1; j < prices.size(); j++) {
                if(prices[j] <= prices[i]) {
                    ans = prices[i] - prices[j];
                    break;
                }
            }

            result.push_back(ans);
        }

        return result;
    }
};