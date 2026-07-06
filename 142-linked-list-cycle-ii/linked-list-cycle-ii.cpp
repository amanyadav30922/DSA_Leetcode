class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        // Step 1: detect cycle
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Step 2: find cycle start
                ListNode* temp = head;

                while (temp != slow) {
                    temp = temp->next;
                    slow = slow->next;
                }

                return temp;
            }
        }

        return NULL;
    }
};