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
    bool hasCycle(ListNode *head) {
        ListNode *temp=head;

        map<ListNode,int>m1;

        if(temp!=NULL){
        while(1){
            if(temp->next==NULL){
                return false;
            }
            else{

                if(temp->next<temp || temp->next==temp){
                    return true;
                }
            }

            temp=temp->next;
        }

        }
        else{
            return false;
        }
    }
};