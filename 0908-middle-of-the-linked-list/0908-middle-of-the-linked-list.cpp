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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int count=0;

        while(temp!=NULL){
            temp=temp->next;
            count++;
        }

        int i=0;
        temp=head;

        while(i<(count)/2){
           temp=temp->next;
           i++;
        }

        return temp;
    }
};