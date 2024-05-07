// problem link
// https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/description/?envType=daily-question&envId=2024-05-07


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
    ListNode* doubleIt(ListNode* head) {
        struct ListNode *temp = head;

        stack<struct ListNode *> stk;

        while(temp){
            stk.push(temp);
            temp = temp->next;
        }

        int extra = 0;

        while(stk.size() > 0){
            int v = (stk.top()->val * 2) + extra;

            stk.top()->val = v%10;
            extra = v / 10;
            stk.pop();
        }

        if(extra > 0){
            struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
            node->val = extra;
            node->next = head;
            head = node;
        }

        return head;

    }
};
