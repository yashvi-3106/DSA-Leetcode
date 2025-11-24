class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* newNode = new ListNode();
        ListNode* temp = newNode;

        while(list1 && list2){
            if(list1->val > list2->val){
                temp->next = list2;
                list2 = list2->next;
            }else{
                temp->next = list1;
                list1 = list1->next;
            }
            temp = temp->next;
        }
        temp->next = list1 ? list1: list2;
        ListNode* head = newNode->next;
        delete newNode;
        return head;
    }
};
