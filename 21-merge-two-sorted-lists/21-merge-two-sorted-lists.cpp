/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
       ListNode *result = NULL;
        if(a==NULL) result=b;
        else if(b==NULL) result =a;
        else if(a->val <= b->val)
        {
            result=a;
            result->next = mergeTwoLists(a->next,b);
        }
         else if(a->val>b->val)
        {
            result=b;
            result->next = mergeTwoLists(a,b->next);
        }
        return result;
    }
};