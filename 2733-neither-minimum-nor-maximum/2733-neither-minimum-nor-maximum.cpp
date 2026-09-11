class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
     int x=INT_MIN, y=INT_MAX;
     for(int i:nums){
        x=max(x,i);
        y=min(y,i);
     }
     for(int i:nums){
        if(i!=x && i!=y) return i;
     }
    return -1;
    }
};