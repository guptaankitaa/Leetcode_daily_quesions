/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val; //the node which we want to delete. we copy the valve of next node
        node->next = node->next->next; //then we link next from  next to next 
    }
    
    //basically we are deleting that (main) node which we are coping
};