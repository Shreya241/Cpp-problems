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
    int pairSum(ListNode* head) {
        ListNode *slow=head, *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* head1=slow->next,*prev=NULL;
         while(head1->next!=NULL){
            ListNode* forw=head1->next;
            head1->next=prev;
            prev=head1;
            head1=forw;
        }
        head1->next=prev;
        slow->next=head1;
        int res=0;
        slow=slow->next;

        while(slow!=NULL){
            int a=(head->val+slow->val);
            res=max(a,res);
            slow=slow->next;
            head=head->next;
        }
        return res;
    }
};