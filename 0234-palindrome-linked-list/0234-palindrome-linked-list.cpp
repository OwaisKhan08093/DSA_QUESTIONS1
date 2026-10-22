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
        // vector<int> v;

        // while(head!=NULL){
        //     v.push_back(head->val);
        //     head=head->next;
        // }
        // int i=0,j=v.size()-1;
        // while(i<j){
        //     if(v[i]!=v[j]){
        //         return false;
        //     }

        //     i++;
        //     j--;
        // }
        // return true;


        if(head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=slow->next;
        ListNode* curr=mid;
        ListNode* prev=NULL;
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        while(prev&&head){
            if(head->val!=prev->val){
                return false;
            }
            head=head->next;
            prev=prev->next;
        }
        return true;


        
    }
};