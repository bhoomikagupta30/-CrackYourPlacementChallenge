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
    bool isPalindrome(ListNode* head) {
        // ListNode *temp=head;
        // vector<int>v1;
        // int c=0;

        // while(temp!=NULL){
        //     v1.push_back(temp->val);
        //     temp=temp->next;
        // }

        // for(int i=0;i<v1.size();i++){
        //     if(v1[i]!=v1[v1.size()-1-i]){
        //         c=1;
        //         break;
        //     }
        // }

        // if(c==0){
        //     return true;
        // }
        // else{
        //     return false;
        // }

        stack<int>s1;

        ListNode *temp=head;

        while(temp!=NULL){
            s1.push(temp->val);
            temp=temp->next;
        }

        temp=head;

        while(temp!=NULL){

            if(!s1.empty() && temp->val!=s1.top()){
                return false;
            }
            s1.pop();
            temp=temp->next;
        }

        return true;
    }
};