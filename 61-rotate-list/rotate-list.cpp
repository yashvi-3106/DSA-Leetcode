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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* ptr  =head;
        int n=0;
        if(head==nullptr){
            return nullptr;
        }
        while(ptr!=nullptr){
            n++;
            ptr=ptr->next;
        }
        k = k%n;
        while(k--){
            ListNode* temp = head;
            while(temp->next->next!=nullptr){
                temp=temp->next;
            }
            ListNode* newNode = temp->next;
            temp->next=nullptr;
            newNode->next=head;
            head=newNode;
        }
        return head;
    }
};