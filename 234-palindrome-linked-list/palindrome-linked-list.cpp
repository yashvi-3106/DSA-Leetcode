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
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* right = reverse(slow);
        ListNode* left = head;
        while (right) {
            if (left->val != right->val)
                return false;
            left = left->next;
            right = right->next;
        }

        return true;
    }
};



// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         vector<int> temp;
//          while (head) {
//             temp.push_back(head->val);
//             head = head->next;
//         }
//         int i = 0, j = temp.size() - 1;
//         while (i < j) {
//             if (temp[i] != temp[j]) return false;
//             i++;
//             j--;
//         }

//         return true;
//     }
// };