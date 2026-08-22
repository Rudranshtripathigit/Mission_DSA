class Solution {
public:
    int finalValueAfterOperations(vector<string>& rudra) {
        int X = 0;

        for(int i = 0; i < rudra.size(); i++) {

            if(rudra[i] == "--X" || rudra[i] == "X--"){
                X = X - 1;
            }

            if(rudra[i] == "X++" || rudra[i] == "++X"){
                X = X + 1;
            }
        }

        return X;
    }
};