class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());

        queue<int> q;

        for (int i = 0; i < deck.size(); i++)
            q.push(i);

        vector<int> ans(deck.size());

        for (int x : deck) {
            int i = q.front();
            q.pop();

            ans[i] = x;

            q.push(q.front());
            q.pop();
        }

        return ans;
    }
};