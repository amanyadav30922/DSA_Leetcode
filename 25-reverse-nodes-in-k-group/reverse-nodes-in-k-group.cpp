class Solution {
public:

    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL)
        {
            ListNode* next = curr->next;

            curr->next = prev;

            prev = curr;
            curr = next;
        }

        return prev;
    }


    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        if(head == NULL)
            return NULL;


        // Check if k nodes exist
        ListNode* temp = head;

        for(int i=0;i<k;i++)
        {
            if(temp == NULL)
                return head;

            temp = temp->next;
        }


        // Reverse first k nodes

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        int cnt = 0;

        while(curr != NULL && cnt < k)
        {
            next = curr->next;

            curr->next = prev;

            prev = curr;
            curr = next;

            cnt++;
        }


        // Connect remaining list
        head->next = reverseKGroup(curr,k);


        return prev;
    }
};