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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;
        
        ListNode * temp =head;
        // counting nodes 
        int count =0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
       k=k%count;
       if( k==0 ) return head;

       temp=head;
       // raching node and cut the  connection 
       for( int i=0;i<count-k-1;i++)
       {
        temp=temp->next;
       }
        ListNode *newHead=NULL;
        newHead=temp->next;
        temp->next=NULL;
         ListNode *fut=newHead;
         while(fut->next!=NULL)
         {
            fut=fut->next;
         }
         fut->next=head;

    return newHead;



    }
};