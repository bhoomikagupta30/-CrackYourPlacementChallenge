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
    ListNode* reverseList(ListNode* head) {
        if(head!=NULL && head->next!=NULL){
        ListNode *temp=head;
        ListNode *start=head;
        ListNode *temp1=temp->next;

            while(temp1!=NULL){
           
            ListNode *ptr=new ListNode();
            ptr->val=temp1->val;
            ptr->next=temp;
            temp=ptr;
            temp1=temp1->next;

        }
        head=temp;
        start->next=NULL;
        }

        return head;
    }
};