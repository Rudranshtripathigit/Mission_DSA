class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {

        if(head == NULL || head->next == NULL)
            return head;

        int count = 0;
        ListNode* temp = head;

        // Count nodes
        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        // k-th node from start
        ListNode* first = head;
        for(int i = 1; i < k; i++){
            first = first->next;
        }

        // k-th node from end
        ListNode* second = head;
        for(int i = 1; i < count-k+1; i++){
            second = second->next;
        }

        // Swap values
        swap(first->val, second->val);

        return head;
    }
};