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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1=headA;
        ListNode *temp2=headB;
        ListNode *temp;
        int c=0;

        while(temp1!=NULL){
            temp2=headB;
            while(temp2!=NULL){

                if(temp2!=temp1){
                    temp2=temp2->next;
                }
                else{
                    temp=temp2;
                    c=1;
                    break;
                }
            }

            if(c==1){
                break;
            }

            temp1=temp1->next;

        }
        
        if(c==1){
            return temp;
        }else{
            return NULL;
        }


    }
};