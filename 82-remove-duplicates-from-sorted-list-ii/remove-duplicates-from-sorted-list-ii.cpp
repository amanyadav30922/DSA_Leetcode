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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next=head;
        ListNode* pre=&dummy;
        ListNode* curr=head;
        while(curr){
            while(curr->next && curr->val==curr->next->val){
                curr=curr->next;
            }
            if(pre->next==curr){
                pre=curr;

            }else{
                pre->next=curr->next;
            }
            curr=curr->next;
        }
return dummy.next;
    }
};