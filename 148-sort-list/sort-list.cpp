// class Solution {
// public:
//     ListNode* sortList(ListNode* head) {

//         vector<int> arr;

//         ListNode* temp=head;

//         while(temp){
//             arr.push_back(temp->val);
//             temp=temp->next;
//         }

//         sort(arr.begin(),arr.end());

//         temp=head;
//         int i=0;

//         while(temp){
//             temp->val=arr[i++];
//             temp=temp->next;
//         }

//         return head;
//     }
// };

class Solution{
    public:
    ListNode* merge(ListNode*l1,ListNode* l2){
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        while(l1 && l2){
            if(l1->val<=l2->val){
                temp->next=l1;
                l1=l1->next;
            }else{
                temp->next=l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        if(l1){
            temp->next=l1;
        }
        if(l2){
            temp->next=l2;
        }
        return dummy->next;
    }
     ListNode* sortList(ListNode* head) {
      if(head==NULL || head->next==NULL) return head;
      ListNode* slow=head;
      ListNode* fast=head->next;
      while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
      }
      
      ListNode* second=slow->next;
      slow->next=NULL;

      ListNode* left=sortList(head);
      ListNode* right=sortList(second);
    return   merge(left,right);

     
     }
};