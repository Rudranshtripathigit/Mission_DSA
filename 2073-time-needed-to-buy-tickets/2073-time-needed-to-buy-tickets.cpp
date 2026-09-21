class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        for(int i=0;i<tickets.size();i++){
            q.push(i);
        }
        int time =0;
        while(tickets[k]!=0){
            int i = q.front();
           q.pop();  // front wale ko hatao
            tickets[i]--; // 1 person = 1ticket at a time
            time++; // 1 tick = 1sec

          if (tickets[i]!=0)
                q.push(i);
        }
        return time;
    }
};