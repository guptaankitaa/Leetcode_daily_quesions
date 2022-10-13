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
        ListNode* curr = head;  //start with head
        while(curr != NULL && curr->next != NULL) //curr and next node will not be null
           {
            
            if(curr->val == curr->next->val)    //that means curren and next have same value
            {
                curr->next = curr->next->next;  // then equal the next curr with curr next next  
            }
           else
            {
              curr = curr->next; //that means curr++ or check the next node
            }
            }    
          return head; 
    }
};
