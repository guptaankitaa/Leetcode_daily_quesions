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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL) return NULL;  
        ListNode* slow = head, *fast = head->next->next; 
        while(fast && fast->next){   
            slow = slow->next;
            fast = fast->next->next;
        }
        if(slow->next->next)
            slow->next = slow->next->next;
        else
            slow->next = NULL;
             return head;
    }
};
      //if head's next element is equal to null then return null
      //make 2 pointer slow and fast slow go 1 step and fast go 2 step
      //condition if fast and fast next element is exist then
      //take 2 pointer slow and fast slow move 1 step and fast move 2 step
      //if slow's next to next element is present then
      //connect slow with slow next to next element 
      //else make slow's next null (that means make null middle element of list) 
      //and return head
