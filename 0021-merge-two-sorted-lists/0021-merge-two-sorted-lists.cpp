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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1!=NULL && list2!=NULL){
        ListNode *temp1=list1;
        ListNode *temp2=list2;

        ListNode *ptr1=new ListNode();
        ptr1->next=NULL;
        ListNode *start=ptr1;
        
       
        if(temp1->val<temp2->val){
            ptr1->val=temp1->val;
            temp1=temp1->next;
        }
        else{
            ptr1->val=temp2->val;
            temp2=temp2->next;
        }

        while(temp1!=NULL && temp2!=NULL){

            ListNode *ptr=new ListNode();
            ptr->next=NULL;

            if(temp1->val<temp2->val){
            ptr->val=temp1->val;
            temp1=temp1->next;
        }
        else{
            ptr->val=temp2->val;
            temp2=temp2->next;
        }

        ptr1->next=ptr;
        ptr1=ptr;

        }

        if(temp1!=NULL){
            ptr1->next=temp1;
        }
        else{
            ptr1->next=temp2;
        }

      return start;
        
    }
    else{
        if(list1!=NULL){
            return list1;
        }
        else{

            return list2;
        }
        
    }

    
    }
};