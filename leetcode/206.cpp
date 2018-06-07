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
    ListNode* reverseList(ListNode* head) {
    ListNode *p=NULL;
    while(head!=NULL)
    {
        ListNode *q=head;
        head=q->next;
        q->next=p;
        p=q;    
    }
        head=p;
        return head;
    }
};