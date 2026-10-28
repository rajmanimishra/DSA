
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) return head;

        ListNode *temp = head;
        int count = 0;

        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        count = count - n;

        if (count == 0)
        {
            ListNode *curr = head;
            head = head->next;
            delete curr;
            return head;
        }

        temp = head;

        for (int i = 1; i < count; i++)// usi node pe pahuchaayega jaha , se connction cut krna hai 
        {
            temp = temp->next;
        }

        ListNode *curr = NULL;
        curr = temp->next;
        temp->next = curr->next;
        delete curr;

        return head;
    }
};
