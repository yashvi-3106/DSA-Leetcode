class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3 = nullptr;  
        ListNode* list4 = nullptr;  

        while (list1 != nullptr && list2 != nullptr) {
            ListNode* temp = nullptr;

            if (list1->val < list2->val) {
                temp = list1;
                list1 = list1->next;
            } else {
                temp = list2;
                list2 = list2->next;
            }

            temp->next = nullptr;

            if (list3 == nullptr) {
                list3 = temp;   
                list4 = temp;   
            } else {
                list4->next = temp;
                list4 = list4->next;
            }
        }

       
        if (list1 != nullptr) {
            if (list3 == nullptr) return list1;
            list4->next = list1;
        } else if (list2 != nullptr) {
            if (list3 == nullptr) return list2;
            list4->next = list2;
        }

        return list3;
    }
};
