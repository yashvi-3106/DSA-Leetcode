class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* ptr = head;
        for(int i = 0; i < k; i++){
            if(!ptr) return head;
            ptr = ptr->next;
        }
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        int count = 0;
        while(count < k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        head->next = reverseKGroup(next,k);
        return prev;
    }
};