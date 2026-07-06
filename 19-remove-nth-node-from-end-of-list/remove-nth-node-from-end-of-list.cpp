// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int cnt = 0;
//         ListNode* temp = head;

//         while (temp != NULL) {
//             cnt++;
//             temp = temp->next;
//         }

//         if (cnt == n) {
//             return head->next;
//         }

//         temp = head;
//         for (int i = 1; i < cnt - n; i++) {
//             temp = temp->next;
//         }

//         temp->next = temp->next->next;

//         return head;
//     }
// };

class Solution{
    public:
    ListNode* removeNthFromEnd(ListNode* head,int n){
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* fast=dummy;
        ListNode* slow=dummy;
        for(int i=0;i<=n;i++){
            fast=fast->next;
        }
        while(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return dummy->next;

    }
};