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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        if(head==NULL||(head->next==NULL && n==1)){
            return NULL;
        }
        ListNode *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            c++;
        }
        int k=c-n;
        if(k<0){
            head=head->next;
            return head;
        }
        ListNode *slow=head;
        for(int i=0;i<k;i++){
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};