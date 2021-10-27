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
    ListNode* reverseList(ListNode* head) {
        ListNode* pnode = NULL; 
        ListNode* cnode = head; 
        ListNode* nnode; 
        
        while(cnode != NULL){
            nnode = cnode->next; 
            cnode->next = pnode; 
            pnode = cnode; 
            cnode = nnode; 
        }
        
        return pnode; 
    }
};