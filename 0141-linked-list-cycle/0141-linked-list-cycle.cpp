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
    //     ListNode *temp=head;

    //    if(temp!=NULL){
    //     while(1){
    //         if(temp->next==NULL){
    //             return false;
    //         }
    //         else{

    //             if(temp->next<temp || temp->next==temp){
    //                 return true;
    //             }
    //         }

    //         temp=temp->next;
    //     }

    //     }
    //     else{
    //         return false;
    //     }
    // }

    map<ListNode*,int>m;

    ListNode *temp=head;

    if(temp!=NULL){
    while(1){

      if(m.find(temp)!=m.end()){
         return true;
      }
      else{
         m[temp]=temp->val;
      }

      if(temp->next!=NULL){
      temp=temp->next;
      }
      else{
        break;
      }








    }

    }
    return false;

    

    }

};