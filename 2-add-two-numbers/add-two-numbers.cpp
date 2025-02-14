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
    void insertAtEnd(ListNode* &l1,int val){
        ListNode* newNode = new ListNode(val);
        ListNode* temp = l1;
        if (temp == nullptr){
            l1 = newNode;
            return;
        }

        while (temp->next!=nullptr) {
            temp = temp->next;   
        }
        temp->next = newNode;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = nullptr;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        int carry = 0;
        while (temp1 != nullptr || temp2 != nullptr || carry != 0) {
            int val1 = (temp1 != nullptr) ? temp1->val : 0;
            int val2 = (temp2 != nullptr) ? temp2->val : 0;

            int sum = val1 + val2 + carry;
            int currentPlaceValue = sum % 10;
            carry = sum / 10;

            insertAtEnd(l3, currentPlaceValue);

            if (temp1 != nullptr) temp1 = temp1->next;
            if (temp2 != nullptr) temp2 = temp2->next;
        }

        return l3;
    }
};