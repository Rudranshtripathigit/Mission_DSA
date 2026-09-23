class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> ans;
        for(string q:queries){
            sort(q.begin(),q.end());
           
            int qc=0;
            for(char c:q) if(c==q[0]) qc++;
            int count=0;
            for(string w:words){
                sort(w.begin(),w.end());
           
                int wc=0;
                for(char c:w) if(c==w[0]) wc++;
                if(wc>qc) count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};