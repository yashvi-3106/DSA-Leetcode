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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if (!a) return b;
        if (!b) return a;

        if (a->val < b->val) {
            a->next = mergeTwoLists(a->next, b);
            return a;
        } else {
            b->next = mergeTwoLists(a, b->next);
            return b;
        }
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) return nullptr;

        while (lists.size() > 1) {
            vector<ListNode*> newLists;

            for (int i = 0; i < lists.size(); i += 2) {
                if (i + 1 < lists.size())
                    newLists.push_back(mergeTwoLists(lists[i], lists[i + 1]));
                else
                    newLists.push_back(lists[i]);
            }

            lists = move(newLists);
        }

        return lists[0];
    }
};




// class Solution {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         vector<int> values;
//         for (auto list : lists) {
//             while (list) {
//                 values.push_back(list->val);
//                 list = list->next;
//             }
//         }
//         sort(values.begin(), values.end());
//         ListNode dummy;
//         ListNode* tail = &dummy;
//         for (int val : values) {
//             tail->next = new ListNode(val);
//             tail = tail->next;
//         }
//         return dummy.next;
//     }
// };
