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
        ListNode* previousP= NULL;
        ListNode* currentP = head;
        ListNode* nextP ;

        while (currentP!=NULL){
            nextP = currentP->next;
            currentP->next=previousP;
            previousP=currentP;
            currentP=nextP;
        }
        head=previousP;
        return head;

    }
};