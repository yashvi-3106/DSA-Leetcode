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
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        vector<ListNode*> temp;
        ListNode* ptr = head;
        while (ptr) {
            temp.push_back(ptr);
            ptr = ptr->next;
        }

        int i = 0, j = temp.size() - 1;

        while (i < j) {
            temp[i]->next = temp[j];
            i++;
            if (i == j) break;  
            temp[j]->next = temp[i];
            j--;
        }

        temp[i]->next = nullptr;  
    }
};
