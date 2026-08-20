/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int>v;
        
        ListNode*temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        } // ye ek vector bna dega jisme element honge (1101)ya etc
    int ans=0;

        for(int i=0;i<v.size();i++){
            ans=ans*2+ v[i];// 101   1*2+1=3,0*2+0=0,1*2+1=3 (7)
        }
        return ans;
    }
};